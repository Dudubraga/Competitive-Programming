/* Problem statement: https://onlinejudge.org/external/9/914.pdf */
#include <iostream>
#include <cmath>
#include <map>
#include <iterator>
using namespace std;

bool isPrime(int n){
    if(n == 0 || n == 1){ return false; }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){ return false; }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        map<int, int>champion;
        int l, u; cin >> l >> u;
        int jumps = 0, max = 0, p = 0;
        for(int i = l; i <= u; i++){
            if(p != 0){ jumps++; }
            if(isPrime(i)){
                p++;
                if(jumps != 0){ 
                    champion[jumps] += 1;
                    jumps = 0;
                }
            }
        }
        map<int, int>::iterator itr;
        
        for(itr = champion.begin(); itr != champion.end(); itr++){
            if(itr->second > max){
                max = itr->second;
                jumps = itr->first;
            }
        }
        int verify = 0;
        for(itr = champion.begin(); itr != champion.end(); itr++){
            if(max == itr->second){ verify++; }
        }
        if(verify <= 1 && p > 1){ cout << "The jumping champion is " <<  jumps << endl; }
        else{ cout << "No jumping champion" << endl;}
    }

    return 0;
}

