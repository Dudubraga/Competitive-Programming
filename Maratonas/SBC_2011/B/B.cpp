#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int t;char p;
        vector<int>E;
        vector<int>D;
        for(int i = 0; i < n; i++){
            cin >> t >> p;
            if(p == 'E'){
                E.push_back(t);
            }
            if(p == 'D'){
                D.push_back(t);
            }
        }
        int cont = 0;
        for(int i = 0; i < D.size(); i++){
            for(int j = 0; j < E.size(); j++){
                if(D[i] == E[j]){
                    cont ++;
                    E[j] = 0;
                    break;
                }
            }
        }
        cout << cont << endl;
        E.clear();
        D.clear();
    }
    return 0;
}