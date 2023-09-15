#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    string str;
    for(int i = 0; i <= N; i++){
        getline(cin, str);
        if(i == 0){ continue; }
        int half = str.size() / 2 - 1;
        int size = str.size() - 1;
        for(int l = half; l >= 0; l--){ cout << str[l]; }
        for(int r = size; r >= half+1; r--){ cout << str[r]; }
        cout << endl;
    }

    return 0;
}

/* 1235 - Inside Out
https://www.beecrowd.com.br/judge/en/problems/view/1235 */
