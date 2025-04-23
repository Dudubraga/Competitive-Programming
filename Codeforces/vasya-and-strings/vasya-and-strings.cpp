#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N, K;
    string S;
    cin >> N >> K >> S;
    int l = 0, r = 0, a = 0, ans = 0;
    while(r < N){
        if(S[r] == 'a'){ a++; }
        if(a <= K){
            ans = max(ans, r-l+1); 
        }
        while(a > K){
            if(S[l] == 'a'){ a--; }
            l++;
        }
        r++;
    }
    int b = 0; l = 0; r = 0;
    while(r < N){
        if(S[r] == 'b'){ b++; }
        if(b <= K){
            ans = max(ans, r-l+1);
        }
        while(b > K){
            if(S[l] == 'b'){ b--; }
            l++;
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}

