#include <iostream>
using namespace std;

int main(){
    int T = 1, N, x, y, u, v;
    while(cin >> N){
        if(N == 0){ break; }
        cin >> x >> y >> u >> v;
        int x1, y1, u1, v1;
        for(int i = 0; i < N-1; i++){
            cin >> x1 >> y1 >> u1 >> v1;
            x = max(x, x1);
            y = min(y, y1);
            u = min(u, u1);
            v = max(v, v1);
        }
        cout << "Teste " << T << endl;
        if(x < u && y > v){
            printf("%d %d %d %d\n\n", x, y, u, v);
        }else{
            cout << "nenhum" << endl << endl;
        }
        T++;
    }

    return 0;
}

