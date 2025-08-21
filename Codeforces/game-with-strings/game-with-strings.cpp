/* Problem statement: https://codeforces.com/contest/1104/problem/B */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    string str; cin >> str;
    stack<char> s;
    int w = 0;
    for(char c : str){
        if(!s.empty()){
            if(s.top() == c){
                s.pop();
                w++;
            } else {
                s.push(c);
            }
        } else {
            s.push(c);
        }
    }
    if(w % 2 == 1){ cout << "Yes" << endl; }
    else{ cout << "No" << endl; }

    return 0;
}

