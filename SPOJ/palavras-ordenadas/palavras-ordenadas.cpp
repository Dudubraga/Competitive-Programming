/* Problem statement: https://br.spoj.com/problems/PALAVRMG/ */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int p; cin >> p;
    while(p--){
        string s; cin >> s;
        char aux = 96; 
        bool v = true;
        for(char c : s){
            if(c >= 65 && c <= 90){
                c += 32;
            }
            if(c <= aux){ 
                v = false; 
                break; 
            }
            aux = c;
        }
        if(v){
            cout << s << ": O" << endl;
        } else {
            cout << s << ": N" << endl;
        }
    }

    return 0;
}

