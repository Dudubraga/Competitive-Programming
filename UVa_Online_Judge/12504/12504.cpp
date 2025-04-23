#include <bits/stdc++.h>
using namespace std;

map<string, string> dict(string str){
    string s1 = "", s2 = "";    
    map<string, string>dictionary;
        int i = 1;
        for(char c : str){
            if(c == '{'){ continue; }
            else if(c == ':'){ i = 2; }
            else if(c == ',' || c == '}'){ 
                if(s1 == ""){ continue; }
                dictionary[s1] = s2;
                s1 = ""; s2 = ""; i = 1;
            }
            else{
                if(i == 1){
                    s1 += c;
                }else{
                    s2 += c;
                }
            }
        }    
    return dictionary;
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t; cin >> t;
    bool first = true;
    while(t--){
        string inp1, inp2, nada;
        bool bothEmpty = false;
        if(first){ getline(cin, nada); first = false; }
        getline(cin, inp1);
        getline(cin, inp2);
        auto oldD = dict(inp1);
        auto newD = dict(inp2);
        vector<string>changes1; // new key
        vector<string>changes2; // new value
        vector<string>changes3; // removed key
            
        for(auto i : newD){
            if(oldD[i.first] == ""){
                changes1.push_back(i.first);
            }
            else if(oldD[i.first] != i.second){
                changes2.push_back(i.first);
            }
        }
        for(auto i : oldD){
            if(newD[i.first] == ""){
                changes3.push_back(i.first);
            }
        }
        
        if(changes1.size() == 0 && changes2.size() == 0 && changes3.size() == 0){
            cout << "No changes" << endl;
        }
        if(changes1.size() != 0){
            cout << "+";
            for(int i = 0; i < changes1.size(); i++){
                cout << changes1[i];
                if(i != changes1.size()-1){
                    cout << ","; 
                }
            } cout << endl;
        }
        if(changes3.size() != 0){
            cout << "-";
            for(int i = 0; i < changes3.size(); i++){
                cout << changes3[i];
                if(i != changes3.size()-1){
                    cout << ","; 
                }
            } cout << endl;
        }
        if(changes2.size() != 0){
            cout << "*";
            for(int i = 0; i < changes2.size(); i++){
                cout << changes2[i];
                if(i != changes2.size()-1){
                    cout << ","; 
                }
            } cout << endl;
        }
        cout << endl;
    }

    return 0;
}

