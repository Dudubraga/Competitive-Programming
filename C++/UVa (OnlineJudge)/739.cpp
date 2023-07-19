#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string name;
    vector<char>code;
    vector<string>NOMES;
    vector<char>CODIGO;
    vector<int>spaces;
    while(cin >> name){
        int count = 0, key = 0;
        for(int i = 0; i < name.size(); i++){
            if(name[i] == 'B' || name[i] == 'P' || name[i] == 'F' || name[i] == 'V'){
                if(count == 0){
                    code.push_back(name[0]);
                    count++;
                    key = 1;
                }
                else if(key != 1){
                    code.push_back('1');
                    count++;
                    key = 1;
                }
            }
            else if(name[i] == 'C' || name[i] == 'S' || name[i] == 'K' || name[i] == 'G'){
                if(count == 0){
                    code.push_back(name[0]);
                    count++;
                    key = 2;
                }
                else if(key != 2){
                    code.push_back('2');
                    count++;
                    key = 2;
                }
            }
            else if(name[i] == 'J' || name[i] == 'Q' || name[i] == 'X' || name[i] == 'Z'){
                if(count == 0){
                    code.push_back(name[0]);
                    count++;
                    key = 2;
                }
                else if(key != 2){
                    code.push_back('2');
                    count++;
                    key = 2;
                }
            }
            else if(name[i] == 'D' || name[i] == 'T'){
                if(count == 0){
                    code.push_back(name[0]);
                    count++;
                    key = 3;
                }
                else if(key != 3){
                    code.push_back('3');
                    count++;
                    key = 3;
                }
            }
            else if(name[i] == 'L'){
                if(count == 0){
                    code.push_back(name[0]);
                    count++;
                    key = 4;
                }
                else if(key != 4){
                    code.push_back('4');
                    count++;
                    key = 4;
                }
            }
            else if(name[i] == 'M' || name[i] == 'N'){
                if(count == 0){
                    code.push_back(name[0]);
                    count++;
                    key = 5;
                }
                else if(key != 5){
                    code.push_back('5');
                    count++;
                    key = 5;
                }
            }
            else if(name[i] == 'R'){
                if(count == 0){
                    code.push_back(name[0]);
                    count++;
                    key = 6;
                }
                else if(key != 6){
                    code.push_back('6');
                    count++;
                    key = 6;
                }
            }
            else{
                if(count == 0){
                    code.push_back(name[0]);
                    count++;
                }
                key = 0;
            }
        }
        if(count < 4){
            for(int j = 0; j < 4 - count; j++){
                code.push_back('0');
            }
        }
        NOMES.push_back(name);
        for(int k = 0; k < 4; k++){
            CODIGO.push_back(code[k]);
        }
        code.clear();
        spaces.push_back(name.size());
    }
    cout << "         " << "NAME" << "                     " << "SOUNDEX CODE" << endl;
    int j = 0;
    for(int i = 0; i < NOMES.size(); i++){
        cout << "         " << NOMES[i];
        int size = 25 - spaces[i];
        for(int k = 0; k < size; k++){
            cout << " ";
        }
        cout << CODIGO[j] << CODIGO[j+1] << CODIGO[j+2] << CODIGO[j+3] << endl;
        j += 4;
    }
    cout << "                   " << "END OF OUTPUT" << endl;

    return 0;
}

/* 739 - Soundex Indexing
https://onlinejudge.org/external/7/739.pdf */