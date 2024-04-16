#include <iostream>
using namespace std;

int change[2][5] = {{1, 5, 10, 20, 50}, {0, 0, 0, 0, 0}};

bool verify(int n, int chash[]){
    for(int i = 4; i >= 0; i--){
        while(n >= change[0][i] && change[1][i] > 0){
            n -= change[0][i];
            change[1][i]--;
        }
    }
    if(n != 0){ return false; }
    return true;
}

int main(){
    bool possible = true;
    int n; cin >> n;
    while(n--){
        int k; cin >> k;
        int given = 0; int cash[5];
        for(int i = 0; i < 5; i++){
            cin >> cash[i];
            given += cash[i] * change[0][i];
        }
        if(given < k){
            possible = false;
            break;
        }
        else if(given > k){
            int c = given - k;
            if(!verify(c, cash)){
                possible = false; 
                break;
            }
        }
        if(given >= k){
            for(int i = 0; i < 5; i++){
                change[1][i] += cash[i];
            }
        }
    }
    if(possible){ cout << "yes" << endl; }
    else{ cout << "no" << endl; }

    return 0;
}

/* 1000989H - Queue (A)
https://codeforces.com/gym/100989/problem/H */
