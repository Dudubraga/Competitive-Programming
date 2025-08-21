/* Problem statement: https://neps.academy/br/exercise/191 */
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int carrots[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> carrots[i][j];
        }
    }
    int Q, L1, C1, L2, C2;
    int count = 0;
    cin >> Q;
    for(int k = 0; k < Q; k++){
        cin >> L1 >> C1 >> L2 >> C2;
        for(int l = L1-1; l <= L2-1; l++){
            for(int c = C1-1; c <= C2-1; c++){
                count += carrots[l][c];
                carrots[l][c] = 0;
            }
        }
    }
    cout << count << endl;

    return 0;
}

