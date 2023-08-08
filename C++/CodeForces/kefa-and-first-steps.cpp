#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, num, increasing = 0;
    vector<int>sequence;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        sequence.push_back(num);
    }
    int count = 1;
    for(int j = 0; j < N-1; j++){
        if(sequence[j] <= sequence[j+1]){
            count++;
            if(count > increasing){
                increasing = count;
            }
        }else{
            count = 1;
        }
    }
    if(increasing == 0) increasing = 1;
    cout << increasing << endl;
    
    return 0;
}

/* 580A - Kefa and First Steps
https://codeforces.com/contest/580/problem/A */