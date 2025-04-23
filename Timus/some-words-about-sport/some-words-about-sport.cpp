#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int monitor[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> monitor[i][j];
        }
    }
    int x = 0, y = 0, z = 0;
    for(int k = 0; k < N*2-1; k++){
        if(k < N){ z = k; x += k; y = 0; }
        else{ z--; x = N-1; y -= z; }
        cout << monitor[x][y] << " ";
        for(int l = 0; l < z; l++){
            x--; y++;
            cout << monitor[x][y] << " ";
        }
    } cout << endl;

    return 0;
}

