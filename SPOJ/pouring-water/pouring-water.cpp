/* Problem statement: https://www.spoj.com/problems/POUR1/ */
#include <iostream>
#include <algorithm>
using namespace std;

int pour(int a, int b, int c){
    int A = a, B = 0, steps = 1;
    while(A != c || B != c){ 
        int dif = min(A, b-B);
        A -= dif;
        B += dif;
        steps++;
        if(A == c || B == c){
            break;
        }
        if(A == 0){
            A = a;
            steps++;
        }
        if(B == b){
            B = 0;
            steps++;
        }
    }
    return steps;
}

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        if(c > a && c > b){ cout << -1 << endl; }
        else if(c == a || c == b){ cout << 1 << endl; }
        else if(c % __gcd(a, b) != 0){ cout << -1 << endl; }
        else{
            cout << min(pour(a, b, c), pour(b, a, c)) << endl;
        }
    }

    return 0;
}

