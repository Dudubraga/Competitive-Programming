/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1267 */
#include <iostream>
using namespace std;

int main(){
    int N, D;
    while(cin >> N >> D){
        if(N == 0 && D == 0) break;
        int attendees[D][N];
        for(int i = 0; i < D; i++){
            for(int j = 0; j < N; j++){
                cin >> attendees[i][j];
            }
        }
        int heigher = 0;
        for(int i = 0; i < N; i++){
            int sum = 0;
            for(int j = 0; j < D; j++){
                sum += attendees[j][i];
            }
            if(sum > heigher){
                heigher = sum;
            }
        }
        if(heigher == D) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}

