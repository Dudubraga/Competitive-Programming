#include <iostream>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    while(cin >> h1 >> m1 >> h2 >> m2){
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){ break; }
        if(h1 == 0){ h1 = 24; }
        if(h2 == 0){ h2 = 24; }
        m1 += h1 * 60;
        m2 += h2 * 60;
        if(m2 < m1){cout << 24*60 - (m1-m2) << endl; }
        else{ cout << m2 - m1 << endl; }
    }
   
    return 0;
}

/* 1103 - Alarm Clock
https://www.beecrowd.com.br/judge/en/problems/view/1103 */