#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tests, result;
    cin >> tests;
    while(tests > 0){
        double N;
        cin >> N;
        result = (-1 + sqrt(1 + (8 * N))) / 2;
        cout << result << endl;
        tests--;
    }

    return 0;
}

/* Coins And Triangle
https://www.codechef.com/problems/TRICOIN */