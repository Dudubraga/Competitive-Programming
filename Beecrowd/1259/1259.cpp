#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
        int N, E = 0, O = 0;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){ cin >> arr[i]; }
        vector<int>even;
        vector<int>odd;
        for(int j = 0; j < N; j++){
                if(arr[j] % 2 == 0){ even.push_back(arr[j]); }
                else{ odd.push_back(arr[j]); }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        for(int i = 0; i < even.size(); i++){
                cout << even[i] << endl;
        }
        for(int j = 0; j < odd.size(); j++){
                cout << odd[j] << endl;
        }

        return 0;
}

