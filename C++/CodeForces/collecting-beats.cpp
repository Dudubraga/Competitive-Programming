#include <iostream>
using namespace std;

int main(){
    int K;
    char game[4][4];
    cin >> K;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> game[i][j];
        }
    }
    int t = 1, count = 0;
    char time;
    while(t < 10){
        for(int x = 0; x < 4; x++){
            for(int y = 0; y < 4; y++){
                if(t == 1) time = '1';
                else if(t == 2) time = '2';
                else if(t == 3) time = '3';
                else if(t == 4) time = '4';
                else if(t == 5) time = '5';
                else if(t == 6) time = '6';
                else if(t == 7) time = '7';
                else if(t == 8) time = '8';
                else if(t == 9) time = '9';
                if(game[x][y] == time){
                    count++;
                }
            }
        }
        if(count > K*2){
            cout << "NO" << endl;
            break;
        }
        count = 0;
        t++;
    }
    if(count == 0){
        cout << "YES" << endl;
    }

    return 0;
}

/* 373A - Collecting Beats is Fun 
https://codeforces.com/problemset/problem/373/A */