/* Problem statement: https://codeforces.com/contest/1281/problem/A */
#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    string name;
    string nacionality;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> name;
        if(name.back() == 'o') nacionality = "FILIPINO";
        if(name.back() == 'u') nacionality = "JAPANESE";
        if(name.back() == 'a') nacionality = "KOREAN";
        cout << nacionality << endl;
    }

    return 0;
}

