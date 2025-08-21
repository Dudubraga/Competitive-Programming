/* Problem statement: https://onlinejudge.org/external/3/357.pdf */
#include <bits/stdc++.h>
using namespace std;

#define MAX 100000
typedef long long ll;
ll ways[MAX];
int types[] = {1,5,10,25,50};
void coinChange (){
    ways [0] = 1;
    for(auto c : types){
        for(ll i = c; i <= MAX; i++){

            ways[i] += ways[i-c];
        }
   
    }
}

int main(){
    int n;
    coinChange();
    while(cin >> n){
        if(n < 5){
            cout << "There is only 1 way to produce " << n << " cents change." << endl;
        }
        else cout << "There are " << ways[n] << " ways to produce " << n << " cents change." << endl;
    }
    return 0;
}