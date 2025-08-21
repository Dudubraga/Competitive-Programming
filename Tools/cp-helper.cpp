#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;
namespace fs = std::filesystem; ;

void create_problem();
void create_contest();
void finalize_problem();
string read_template_from_file(const fs::path& template_path);

const string cpp_template = read_template_from_file("../Tools/template.cpp");

// --- MENU ---
int main(){
    cout << "----------------------------------\n";
    cout << "  Competitive Programming Helper  \n";
    cout << "----------------------------------\n";
    cout << "1. Start a new Problem\n";
    cout << "2. Start a new Contest\n";
    cout << "3. Finalize a Problem\n";
    cout << "4. Continue where I am (Open VS Code)\n";
    cout << "Choose an option: ";
    int choice; cin >> choice; cin.ignore();

    switch(choice){
        case 1: create_problem(); break;
        case 2: create_contest(); break;
        case 3: finalize_problem(); break;
        case 4: system("code ."); break;
        default: cout << "Invalid option. Exiting.\n"; break;
    }
    return 0;
}

// --- FUNCTIONS ---
/**
 * @brief Sanitizes a string to lowercase_with_underscores format
 */
string sanitize_name(string s){
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c); });
    replace(s.begin(), s.end(), ' ', '_');
    return s;
}

/**
 * @brief Reads the C++ template from an external file.
 * @param template_path The path to the template file.
 * @return A string containing the template, or a default template if the file is not found.
 */
string read_template_from_file(const fs::path& template_path) {
    if (fs::exists(template_path)) {
        ifstream file(template_path);
        stringstream buffer;
        buffer << file.rdbuf();
        return buffer.str();
    } else {
        // Fallback if template.cpp is missing
        cout << "[Warning] 'template.cpp' not found. Using a basic default template.\n";
        return R"(
#include <iostream>

int main() {
    // code here
    return 0;
}
)";
    }
}

/**
 * @brief Creates the folder structure for a single problem
 */
void create_problem(){
    string problem_name_raw, problem_url;
    cout << "Enter the problem's name: ";
    getline(cin, problem_name_raw);

    cout << "Enter the problem's URL: ";
    getline(cin, problem_url);
    string problem_name = sanitize_name(problem_name_raw);
    
    fs::path problem_path = problem_name;
    if(!fs::create_directory(problem_path)){
        cerr << "Error: Could not create directory '" << problem_name << "'. It may already exist.\n";
        return;
    }

    // Create .cpp file
    ofstream cpp_file(problem_path / (problem_name + ".cpp"));
    cpp_file << "/* Problem statement: " << problem_url << " */\n" << cpp_template;
    cpp_file.close();

    // Create empty 'in.txt' file
    ofstream input_file(problem_path / "in.txt");
    input_file.close();

    cout << "Problem '" << problem_name << "' created successfully!\n";
    
    string command = "code " + problem_path.string();
    system(command.c_str());
}

/**
 * @brief Creates the folder structure for a contest.
 */
void create_contest(){
    // Get date
    time_t t = time(nullptr);
    char date_buf[6]; // DD_MM + null terminator
    strftime(date_buf, sizeof(date_buf), "%d_%m", localtime(&t));
    
    string contest_folder_name = "Contest_" + string(date_buf);
    fs::create_directory(contest_folder_name);
    
    int num_problems;
    cout << "How many problems are in the contest? ";
    cin >> num_problems; cin.ignore();

    cout << "Use default names (A, B, C...)? (y/n): ";
    char choice; cin >> choice; cin.ignore();
    bool use_default_names = (choice == 'y' || choice == 'Y');
    
    char problem_letter = 'A';
    for(int i = 0; i < num_problems; ++i){
        string problem_name_raw;
        if(use_default_names){
            problem_name_raw = problem_letter++;
        }else{
            cout << "Enter name for problem " << i+1 << ": ";
            getline(cin, problem_name_raw);
        }
        
        string problem_name = sanitize_name(problem_name_raw);
        fs::path problem_path = fs::path(contest_folder_name) / problem_name;
        
        fs::create_directory(problem_path);
        ofstream problem_file(problem_path / (problem_name + ".cpp"));
        problem_file << "/* Problem: " << problem_name_raw << " */" << cpp_template;
        problem_file.close();
        ofstream input_file(problem_path / "in.txt");
        input_file.close();
        cout << "  - Created sub-folder for problem " << problem_name_raw << "\n";
    }

    cout << "\nContest structure created!\n";
    string command = "code " + contest_folder_name;
    system(command.c_str());
}

/**
 * @brief Moves a completed problem folder to a judge folder.
 */
void finalize_problem(){
    auto display_menu = [](const vector<fs::path>& items, const string& title){
        cout << title << "\n";
        if(items.empty()){
            cout << "No items found.\n"; return;
        }
        for (size_t i = 0; i < items.size(); ++i) {
            cout << i + 1 << ". " << items[i].filename().string() << "\n";
        }
        cout << "> ";
    };

    // --- Select problem to move ---
    vector<fs::path> problem_folders;
    for(const auto& entry : fs::directory_iterator(".")){
        if(entry.is_directory()){
            problem_folders.push_back(entry.path());
        }
    }
    display_menu(problem_folders, "Select the problem folder to move:");
    
    int problem_choice; cin >> problem_choice;
    if(problem_choice < 1 || problem_choice > problem_folders.size()){
        cerr << "Invalid selection.\n"; return;
    }
    fs::path source_path = problem_folders[problem_choice - 1];

    // --- Select destination ---
    fs::path parent_path = fs::current_path().parent_path();
    vector<fs::path> judge_folders;
    for(const auto& entry : fs::directory_iterator(parent_path)){
        if(entry.is_directory()){
            judge_folders.push_back(entry.path());
        }
    }
    display_menu(judge_folders, "\nSelect the destination Judge folder:");

    int judge_choice; cin >> judge_choice;
    if(judge_choice < 1 || judge_choice > judge_folders.size()){
        cerr << "Invalid selection.\n"; return;
    }
    fs::path dest_path = judge_folders[judge_choice - 1] / source_path.filename();

    // --- Perform the move ---
    try{
        fs::path exe_path = source_path / (source_path.filename().string() + ".exe");
        if(fs::exists(exe_path)){
            fs::remove(exe_path);
            cout << "Removed executable.\n";
        }
        
        fs::rename(source_path, dest_path);
        cout << "Successfully moved '" << source_path.filename().string()
             << "' to '" << dest_path.parent_path().filename().string() << "'.\n";
    }catch(const fs::filesystem_error& e){
        cerr << "Error moving folder: " << e.what() << '\n';
    }
}
