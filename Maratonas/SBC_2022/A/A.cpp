#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int cont = 0;
    if(s[0] == 'a' && s[1] == 'a'){ cont++; }
    if(s[s.length()-1] == 'a' && s[s.length()-2] == 'a'){
        cont++;
    }
    for(int i = 1; i < s.length()-1; i++){
        if(s[i] == 'a' && (s[i-1] == 'a' || s[i+1] == 'a')){
            cont++;
        }
    }   
    cout << cont << endl;

    return 0;
}