#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int board[N][N];
    int columns[N], lines[N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> board[i][j];
        }
    }
    /* verificando linha por linha */
    for(int i = 0; i < N; i++){
        int sum1 = 0;
        for(int j = 0; j < N; j++){
            sum1 += board[i][j];
            if(j == N-1){
                lines[i] = sum1;
            }
        }
    }
    /* verificando coluna por coluna */
    for(int j = 0; j < N; j++){
        int sum2 = 0;
        for(int i = 0; i < N; i++){
            sum2 += board[i][j];
            if(i == N-1){
                columns[j] = sum2;
            }
        }
    }
    int maxSum = 0, sum3;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            sum3 = (lines[i] + columns[j]) - (board[i][j] * 2);
            if(sum3 > maxSum){
                maxSum = sum3;
            }
        }
    }
    cout << maxSum << endl;

    return 0;
}

/* Torre
https://neps.academy/br/exercise/45 */