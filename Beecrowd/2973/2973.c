#include <stdio.h>

typedef long long ll;
const int MAX = 1e5+1;
ll n, c, t;

int possible(ll chute, int p[]){
    int comp = 1;
    ll resta = t * chute;
    for(int i = 0; i < n; i++){
        if(resta >= p[i]){ resta -= p[i]; }
        else{
            comp++;
            resta = t * chute;
            i--;
        }
        if(comp > c){ return 0; }
    }
    return 1;
}

int main(){
    int pipocas[MAX];
    scanf("%d %d %d", &n, &c, &t);
    for(int i = 0; i < n; i++){
        scanf("%d", &pipocas[i]);
    }
    int l = 0, r = 10e9+1;
    while(l < r){
        int m = (l + r) / 2;
        if(!possible(m, pipocas)){ l = m + 1; }
        else{ r = m; }
    }
    printf("%d\n", l);

    return 0;
}

