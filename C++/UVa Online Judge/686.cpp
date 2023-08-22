#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int primos(int n){
    int P = 1;
    for(int j = 2; j <= sqrt(n); j++){
        if(n % j == 0){
            P++;
            break;
        }
    }
    return P;
}

int main(){
    int N;
    vector<int>numbers;
    while(cin >> N){
        int count = 0;
        if(N == 0)break;

        for(int i = 2; i < N; i++){
            if(primos(i) == 1){
                numbers.push_back(i);
            }
        }
        for(int i = 0; i < numbers.size(); i++){
            for(int j = i; j < numbers.size(); j++){
                if(numbers[i] + numbers[j] == N){
                    count++;
                }
            }
        }
        cout << count << endl;
        numbers.clear();
    }
    return 0;
}

/* 686 - Goldbach’s Conjecture (II)
https://onlinejudge.org/external/6/686.pdf */