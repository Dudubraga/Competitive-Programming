#include <stdio.h>

int main(){
    int N, H, peaks;
    while(scanf("%d", &N) && N != 0){
        int wave[N+1];
        for(int i = 0; i < N; i++){
            scanf("%d", &H);
            wave[i] = H;
        }
        wave[N] = wave[0];
        peaks = 0;
        for(int j = 1; j < N; j++){
            if(wave[j] > wave[j-1] && wave[j] > wave[j+1]){
                peaks++;
            }
            if(wave[j] < wave[j-1] && wave[j] < wave[j+1]){
                peaks++;
            }
        }
        if(wave[0] > wave[N-1] && wave[0] > wave[1]){ peaks++; }
        if(wave[0] < wave[N-1] && wave[0] < wave[1]){ peaks++; }
        
        printf("%d\n", peaks);
    }

    return 0;
}

