#include <iostream>
using namespace std;

int main() {
    int L; cin >> L;
    char T; cin >> T;
    float M[12][12];
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }
    float sum = 0;
    for(int i = 0; i < 12; i++){
        sum += M[L][i];
    }
    if(T == 'S'){
        printf("%0.1f\n", sum);
    } else {
        printf("%0.1f\n", sum/12);
    }
    
    return 0;
}

/* 1181 - Line in Array
https://judge.beecrowd.com/en/problems/view/1181 */
