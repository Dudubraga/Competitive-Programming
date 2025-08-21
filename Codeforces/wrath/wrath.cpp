/* Problem statement: https://codeforces.com/problemset/problem/892/B */
/* Time Limit */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N; cin >> N;
    int guilty[N];
    for(int i = 0; i < N; i++){ cin >> guilty[i]; }
    int kills = N, surv = 0;
    for(int i = N-1; i >= 0; i--){
        if(i < kills){ surv++; }
        if(i - guilty[i] < kills){
            kills = i - guilty[i];
        }
    }
    
    cout << surv << endl;

    return 0;
}

