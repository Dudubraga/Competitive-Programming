#include <stdio.h>

int main(){
    int h1, m1, h2, m2;
    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2)){
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){ break; }
        if(h1 == 0){ h1 = 24; }
        if(h2 == 0){ h2 = 24; }
        m1 += h1 * 60;
        m2 += h2 * 60;
        if(m2 < m1){ printf("%d\n", 24*60 - (m1-m2)); }
        else{ printf("%d\n", m2 - m1); }
    }
   
    return 0;
}

