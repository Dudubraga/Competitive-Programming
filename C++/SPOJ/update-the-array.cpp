#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int t, l, r, val, n, u;
    cin >> t;
    while(t--){
        cin >> n >> u;
        int arr[n]; memset(arr, 0, sizeof(arr));
        int arrR[n]; memset(arrR, 0, sizeof(arrR));
        for(int i = 0; i < u; i++){
            cin >> l >> r >> val;
            arrR[l] += val;
            if(r + 1 < n){ arrR[r+1] -= val; }
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arrR[i];
            arr[i] += sum;
        }
        int q, qi; cin >> q;  
        for(int i = 0; i < q; i++){
            cin >> qi;
            cout << arr[qi] << endl;
        }
    }

    return 0;
}

/* UPDATEIT - Update the array !
https://www.spoj.com/problems/UPDATEIT/ */