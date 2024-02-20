#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, x;
    cin >> N;
    long long sum = 0, toastman = 0;
    vector<int>numbers;
    for(int i = 0; i < N; i++){
        cin >> x;
        toastman += x;
        numbers.push_back(x);
    }
    sort(numbers.begin(), numbers.end());
    sum = toastman;
    for(int i = 0; i < N-1; i++){
        toastman += sum;
        sum -= numbers[i];
    }
    cout << toastman << endl;

    return 0;
}

/* 461A - Appleman and Toastman
https://codeforces.com/problemset/problem/461/A */