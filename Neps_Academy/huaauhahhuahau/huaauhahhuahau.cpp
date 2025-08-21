/* Problem statement: https://neps.academy/br/exercise/118 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string haha;
    vector<char>vowels;
    vector<char>backwards;
    cin >> haha;
    for(int i = 0; i < haha.size(); i++){
        if(haha[i] == 'a'){
            vowels.push_back(haha[i]);
        }
        else if(haha[i] == 'e'){
            vowels.push_back(haha[i]);
        }
        else if(haha[i] == 'i'){
            vowels.push_back(haha[i]);
        }
        else if(haha[i] == 'o'){
            vowels.push_back(haha[i]);
        }
        else if(haha[i] == 'u'){
            vowels.push_back(haha[i]);
        }
    }
    for(int j = vowels.size()-1; j >= 0; j--){
        backwards.push_back(vowels[j]);
    }
    int count = 0;
    for(int k = 0; k < vowels.size(); k++){
        if(vowels[k] == backwards[k]){
            count++;
        }
    }
    if(count == vowels.size()){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}

