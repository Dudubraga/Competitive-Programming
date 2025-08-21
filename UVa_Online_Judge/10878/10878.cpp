/* Problem statement: https://onlinejudge.org/external/108/10878.pdf */
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string>S;
    string inp;
    while(getline(cin, inp)){
        S.push_back(inp);
    }
    for(int i = 1; i < S.size()-1; i++){
        string aux = "";
        for(int j = 1; j < S[i].size()-1; j++){
            if(S[i][j] == 'o'){
                aux += '1';
            } else if(S[i][j] == ' '){
                aux += '0';
            }
        }
        S[i] = aux;
    }
    string str = "";
    for(int i = 1; i < S.size()-1; i++){
        int ascii = 0;
        for (int j = 0; j < 8; j++) {
            ascii <<= 1;
            ascii |= (S[i][j] - '0');
        }
        str += static_cast<char>(ascii);
    }
    cout << str;

    return 0;
}

