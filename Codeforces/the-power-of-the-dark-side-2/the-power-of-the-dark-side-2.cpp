/* Problem statement: https://codeforces.com/gym/102215/problem/J */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long int lld;

int main(){
    int n; cin >> n;
    vector<lld>jedi, sith, self;
    lld a, b, c, j, s;
    for(int i = 0; i < n; i++){
        scanf("%lld %lld %lld", &a, &b, &c);
        s = a + b + c;
        j = a + b + c - max(a, max(b, c)) + 2;
        sith.push_back(s); jedi.push_back(j);
        if(s >= j){ 
            self.push_back(-1); 
        }else{ 
            self.push_back(0);
        }
    }
    sort(jedi.begin(), jedi.end());
    lld wins;
    for(int i = 0; i < n; i++){
        wins = upper_bound(jedi.begin(), jedi.end(), sith[i]) - jedi.begin();
        if(i != n-1){
            printf("%lld ", wins + self[i]);
        }else{
            printf("%lld\n", wins + self[i]);
        }
    }

    return 0;
}

