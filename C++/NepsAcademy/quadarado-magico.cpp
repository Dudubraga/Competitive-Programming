#include <iostream>
using namespace std;

int main(){
    int n, line, column;
    int sum = 0, sumL = 0, sumC = 0, sumD1 = 0, sumD2 = 0;
    cin >> n;
    int square[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> square[i][j];
        }
    }
    /* Soma */
    for(line = 0; line < n; line++){
        sum = sum + square[0][line];
    }
    /* Linha */
    for(column = 0; column < n; column++){
        sumL = 0;
        for(line = 0; line < n; line++){
            sumL = sumL + square[column][line];
        }
        if(sumL != sum) break;
    }
    /* Coluna */
    for(line = 0; line < n; line++){
        sumC = 0;
        for(column = 0; column < n; column++){
            sumC = sumC + square[column][line];
        }
        if(sumC != sum) break;
    }
    /* Diagonal 1 (dir > esq) */
    for(line = 0; line < n; line++){
        for(column = 0; column < n; column++){
            if((line + column) == (n - 1)){
                sumD1 = sumD1 + square[column][line];
            }
        }
    }
    /* Diagonal 2 (esq > dir) */
    for(int d = 0; d < n; d++){
        sumD2 = sumD2 + square[d][d];
    }
    if(sum == sumL && sum == sumC && sum == sumD1 && sum == sumD2) cout << sum << endl;
    else cout << "-1" << endl;

    return 0;
}

/* Quadrado Mágico
https://neps.academy/br/exercise/236 */