/* Problem statement: https://codeforces.com/contest/588/problem/A */
#include <iostream>
using namespace std; 

int main(){
    int days;
    cin >> days;
    int meat[days], price[days];
    for(int i = 0; i < days; i++){
        cin >> meat[i] >> price[i];
    }
    int total = meat[0] * price[0]; 
    int j = 0;
    for(int i = 1; i < days; i++){
        if(price[i] <= price[j]){ j = i; }
        total += meat[i] * price[j];
    }
    cout << total << endl;

    return 0;
}

