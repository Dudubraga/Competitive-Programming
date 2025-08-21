/* Problem statement: https://br.spoj.com/problems/PACMAN14/ */
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    char game[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> game[i][j];
        }
    }
    int move = 0, dir = 1, count = 0, max = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(game[i][move] == 'o'){ count++; }
            else if(game[i][move] == 'A'){ count = 0; }
            if(count > max){ max = count; }
            move += dir;
        }
        if(move == N){ dir = -1; move--; }
        else{ dir = 1; move++; }
    }
    cout << max << endl;

    return 0;
}

