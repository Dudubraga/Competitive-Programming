#include <iostream>
using namespace std;

int main(){
    int N, M, test = 1;
    while(cin >> N >> M){
        if(N == 0 && M == 0){ break; }
        int tv[N][M];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){ cin >> tv[i][j]; }
        }
        int x, y;
        int left_right = 0, up_down = 0; 
        while(cin >> x >> y){
            if(x == 0 && y == 0){ break; }
            left_right += x;
            up_down += y;
        }
        int fixed[N][M];
        for(int i = 0; i < N; i++){
            y = (N + (i - up_down) % N) % N;
            for(int j = 0; j < M; j++){
                x = (M + (j + left_right) % M) % M;
                fixed[y][x] = tv[i][j];
            }
        }
        cout << "Teste " << test << endl;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(j != 0){ cout << " ";}
                cout << fixed[i][j];
            } cout << endl;
        } cout << endl;
        test++;
    }

    return 0;
}

