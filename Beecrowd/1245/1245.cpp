#include <iostream>
using namespace std;

int main(){
        int N;
        while(cin >> N){
        int M[N];
        char L[N];
        for(int i = 0; i < N; i++){
                cin >> M[i] >> L[i];
        }
        int pairs = 0;
        for(int j = 0; j < N; j++){
                for(int k = 0; k < N; k++){
                        if(k != j && M[k] == M[j]){
                                if(L[k] != L[j]){
                                        pairs++;
                                        M[k] = 0;
                                        M[j] = 0;
                                        L[k] = '0';
                                        L[j] = '0';
                                }
                        }
                }
        }
                cout << pairs << endl;
        }

    return 0;
}

