#include <iostream>
#include <math.h>
using namespace std;

int div(int n){
    if(n <= 1){ return 0; }
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++){ 
        if(n % i == 0){
            sum += i;
            if(i != sqrt(n)){ sum += n / i; }    
        }
    }
    return sum;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << div(n) << endl; 
    }

    return 0;
}

/* DIVSUM - Divisor Summation
https://www.spoj.com/problems/DIVSUM/ */