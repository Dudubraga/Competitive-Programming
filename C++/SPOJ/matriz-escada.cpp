#include <iostream>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    int matriz[N][M];
    bool P = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(matriz[i][j] != 0 && j != 0){
                for(int y = i+1; y < N; y++){
                    for(int z = j-1; z <= j; z++){
                        if(matriz[y][z] != 0){
                            P = false;
                        }
                    }
                }
                break;
            }
            else if(matriz[i][j] != 0 && j == 0){
                for(int y = i+1; y < N; y++){
                    if(matriz[y][j] != 0){
                        P = false; 
                    }
                }
                break;
            }
            else if(j == M-1 && matriz[i][j] == 0){
                for(int y = i+1; y < N; y++){
                    for(int z = j-1; z <= j; z++){
                        if(matriz[y][z] != 0){
                            P = false;
                        }
                    }
                }
                break;
            }
        }
    }
    if(P){ cout << "S" << endl; }
    else{ cout << "N" << endl; }

    return 0;
}

/* ESCADA14 - Matriz Escada
https://br.spoj.com/problems/ESCADA14/ */