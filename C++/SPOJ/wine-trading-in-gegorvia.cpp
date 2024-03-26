#include <iostream>
using namespace std;

int main(){
    int t;
    while(cin >> t){
        if(t == 0){ break; }
        long long wines[t+1]; wines[t] = 0;
        for(int i = 0; i < t; i++){ cin >> wines[i]; }
        long long count = 0;
        for(int i = 0; i < t; i++){
            if(wines[i] >= 0){ count += wines[i]; }
            else{ count -= wines[i]; }
            wines[i+1] += wines[i];
        }
        cout << count << endl;
    }

    return 0;
}

/* GERGOVIA - Wine trading in Gergovia
https://www.spoj.com/problems/GERGOVIA/ */