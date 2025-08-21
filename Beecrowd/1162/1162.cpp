/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1162 */
#include <iostream>
using namespace std;

int main(){
    int T, L;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> L;
        int train[L];
        for(int j = 0; j < L; j++){ cin >> train[j]; }
        int swaps = 0, aux;
        for(int a = 1; a < L; a++){
            int b = a;
            while(train[b-1] > train[b] && b > 0){
                aux = train[b-1];
                train[b-1] = train[b];
                train[b] = aux;
                swaps++; b--;
            } 
        }
        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
    }

    return 0;
}

