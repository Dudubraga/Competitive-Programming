/* Problem statement: https://codeforces.com/problemset/problem/6/C */
#include <iostream>
using namespace std;

int main(){
    int alice = 1, bob = 1;
    int n; cin >> n;
    int bars[n];
    for(int i = 0; i < n; i++){
        cin >> bars[i];
    }
    if(n >= 3){
        int a = 0, b = n-1;
        while(a < b-1){
            if(bars[a] < bars[b] && a != b){ 
                a++; bars[a] += bars[a-1]; alice++;
            }
            else if(bars[a] > bars[b] && b != a){
                b--; bars[b] += bars[b+1]; bob++; 
            }
            else{
                a++; bars[a] += bars[a-1]; alice++;
            }
        }
    }
    else if(n == 1){ bob = 0; }
    cout << alice << " " << bob << endl;

    return 0;
}

