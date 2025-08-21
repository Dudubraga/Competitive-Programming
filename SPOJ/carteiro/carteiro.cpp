/* Problem statement: https://br.spoj.com/problems/CARTEI14/ */
#include <iostream>
using namespace std;

int Search(int *arr, int size, int key){
    int high = size, low = 0;
    while(low <= high){
        int mid = (high + low) / 2;
        if(arr[mid] > key){
            high = mid - 1;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int N, M;
    cin >> N >> M;
    int houses[N], packages[M];
    for(int i = 0; i < N; i++){
        cin >> houses[i];
    }
    int j = 0, time = 0;
    for(int i = 0; i < M; i++){
        cin >> packages[i];
        if(packages[i] != houses[j]){
            int pos = Search(houses, N, packages[i]);
            time += abs(j - pos);
            j = pos;
        }
    }
    cout << time << endl;

    return 0;
}

