/* Problem statement: https://acm.timus.ru/problem.aspx?space=1&num=1005 */
#include <iostream>
using namespace std;

int w[21], total = 0, best = 100001;

void pile(int n, int wei, int i){
    if(i == n){ return; }
    if(abs((total-wei) - wei) < best){ best = abs((total-wei) - wei); }
    pile(n, wei, i+1);
    pile(n, wei += w[i], i+1);
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> w[i];
        total += w[i];
    }
    pile(n, 0, 0);
    cout << best << endl;

    return 0;
}

