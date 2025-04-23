#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n; cin >> n;
    int arr[n];
    vector<pair<int,int>>swaps;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        int j = i;
        for (int k = i; k < n; k++){
            if (arr[j] > arr[k]){ j = k; }
        }
        if (i != j){ swaps.push_back(make_pair(i, j)); }
        int aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
    }
    cout << swaps.size() << endl;
    for(auto i : swaps){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}

