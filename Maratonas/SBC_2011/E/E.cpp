#include <bits/stdc++.h>
using namespace std;

int main(){
    int C, N;
    while(cin >> C >> N){
        char op; int p, q, cont = 0;
        vector<int>vagas(C, 0);
        map<int, int>placas;
        for(int i = 0; i < N; i++){
            cin >> op;
            if(op == 'C'){
                cin >> p >> q;
                placas[p] = -1;
                int spc = 0, pos = 0;
                for(int j = 0; j <= C; j++){
                    if(vagas[j] == 0 && spc < q && j < C){
                        if(spc == 0){ pos = j; }
                        spc++;
                    } else {
                        if(spc >= q){
                            placas[p] = pos; cont++;
                            for(int k = pos; k < pos+spc; k++){
                                vagas[k] = p;
                            }
                            break;
                        } else {
                            spc = 0; pos = i;
                        }
                    }
                }
            } else {
                cin >> p;
                if(placas[p] != -1){
                    int i = placas[p];
                    while(vagas[i] == p){
                        vagas[i] = 0; i++;
                    }
                    placas[p] = -1;
                }
            }
        }
        cout << cont * 10 << endl;
    }

    return 0;
}