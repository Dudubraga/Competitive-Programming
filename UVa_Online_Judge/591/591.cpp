#include <iostream>
using namespace std;

int main(){
    int N, h, set = 1;
    while(cin >> N && N != 0){
        int wall[N];
        int sum = 0;
        for(int i = 0; i < N; i++){
            cin >> h;
            sum += h;
            wall[i] = h;
        }
        int avg = sum / N;
        int moves = 0;
        for(int j = 0; j < N; j++){
            if(wall[j] > avg){ moves += wall[j] - avg; }
        }
        printf("Set #%d\n", set);
        printf("The minimum number of moves is %d.\n\n", moves);
        set++;
    }

    return 0;
}

