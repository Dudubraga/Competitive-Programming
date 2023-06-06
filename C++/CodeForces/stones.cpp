#include <iostream>
#include <string>
using namespace std;

int main(){

    int stones, count = 0;
    string s;
    cin >> stones >> s;

    for(int i = 1; i < s.size(); i++){
        if(s[i-1] == s[i]){
            count++;
        }
    }
    cout << count;

    return 0;
}