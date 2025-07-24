#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    vector<char> D(35);
    vector<char> DR(35, '-');
    for(int i = 0; i < 26; i++){
        D[i] = i+'A';
    }
    for(int i = 0; i < 9; i++){
        D[i+26] = i+'1';
    }
    DR[0] = 'A'; DR[4] = '3'; DR[7] = 'H';
    DR[8] = 'I'; DR[9] = 'L'; DR[11] = 'J';
    DR[12] = 'M'; DR[14] = 'O'; DR[18] = '2';
    DR[19] = 'T'; DR[20] = 'U'; DR[21] = 'V';
    DR[22] = 'W'; DR[23] = 'X'; DR[24] = 'Y';
    DR[25] = '5'; DR[26] = '1'; DR[27] = 'S';
    DR[28] = 'E'; DR[30] = 'Z'; DR[33] = '8';

    string s; 
    while(cin >> s){
        bool isPal = true, isRev = true;
        for(int i = 0; i < s.size() / 2; i++){
            if(s[i] != s[s.size()-1-i]){
                isPal = false;
            }
            if(s[i] <= 'Z' && s[i] >= 'A'){
                if((s[i] == D[s[i]-'A'] && s[s.size()-1-i] != DR[s[i]-'A'])
                || (s[i] == DR[s[i]-'A'] && s[s.size()-1-i] != D[s[i]-'A'])){
                    isRev = false;
                }
            } else {
                if((s[i] == D[s[i]-'1'+26] && s[s.size()-1-i] != DR[s[i]-'1'+26])
                || (s[i] == DR[s[i]-'1'+26] && s[s.size()-1-i] != D[s[i]-'1'+26])){
                    isRev = false;
                }
            }
        }
        if(s.size() % 2 == 1){
            if(s[s.size()/2] <= 'Z' && s[s.size()/2] >= 'A'){
                if(D[s[s.size()/2]-'A'] != DR[s[s.size()/2]-'A']){
                    isRev = false;
                }
            } else {
                if(D[s[s.size()/2]-'1'+26] != DR[s[s.size()/2]-'1'+26]){
                    isRev = false;
                }
            }
        }
        if(isPal && isRev){
            cout << s << " -- is a mirrored palindrome." << endl;
        } else if(isPal){
            cout << s << " -- is a regular palindrome." << endl;
        } else if(isRev){
            cout << s << " -- is a mirrored string." << endl;
        } else {
            cout << s << " -- is not a palindrome." << endl;
        }
        cout << endl;
    }

    return 0;
}
