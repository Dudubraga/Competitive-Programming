#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>freeSet;

int Verify(int key, int mid, int low){
    while(mid > low && key == freeSet[mid-1]){
        mid--;
    }
    return mid;
} 

int BinSearch(int key, int high, int low){
    if(low > high || freeSet[low] > key || freeSet[high] < key){
        return -1;
    }
    else{
        while(low <= high){
            int mid = (high + low) / 2;
            if(freeSet[mid] > key){
                high = mid - 1;
            }
            else if(freeSet[mid] < key){
                low = mid + 1;
            }
            else{
                return Verify(key, mid, low);
            }
        }
        return -1;
    }
}

int main(){
    int N, K, x;
    vector<int>set;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> x;
        set.push_back(x);
    }
    sort(set.begin(), set.end());
    for(int j = 0; j < N; j++){
        if(set[j] % K != 0){ freeSet.push_back(set[j]); }
        else{
            int high = freeSet.size()-1, low = 0;
            x = BinSearch(set[j] / K, high, low); 
            if(x < 0){ freeSet.push_back(set[j]); }
        }
    }
    cout << freeSet.size() << endl;

    return 0;
}

/* 275C - k-Multiple Free Set
https://codeforces.com/contest/275/problem/C */
