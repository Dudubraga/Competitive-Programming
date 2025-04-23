#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M, O, P, B;
    vector<int>paises;
    cin >> N >> M;
    for(int i = 0; i < N; i++){ paises.push_back(0); }
    for(int j = 0; j < M; j++){
        cin >> O >> P >> B;
        paises[O-1] += 100;
        paises[P-1] += 10;
        paises[B-1] += 1;
    }
    int ordem[N];
    for(int i = 0; i < N; i++){ ordem[i] = paises[i]; }
    sort(paises.begin(), paises.end(), greater<int>());
    int cont = 0;
    for(int j = 0; j < N; j++){
        for(int k = 0; k < N; k++){
            if(cont == N){ break; }
            if(ordem[k] == paises[j] && ordem[k] >= 0){
                if(cont == N-1){ cout << k + 1 << endl; }
                else{ cout << k + 1 << " "; }
                cont++;
                ordem[k] = -1;
            }
        }
    }

    return 0;
}

