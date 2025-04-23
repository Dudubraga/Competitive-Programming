#include <iostream>
using namespace std;

int main(){
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        int numbers[N];
        int total = 0;
        for(int i = 0; i < N; i++){
            cin >> numbers[i];
            total += numbers[i];
        }
        /* subset sum going forward */
        int sum1 = total, max1 = total;
        for(int j = 0; j < N; j++){
            sum1 -= numbers[j];
            if(sum1 > max1) max1 = sum1;
        }
        /* subset sum going backwards */
        int sum2 = total, max2 = total;
        for(int k = N-1; k >= 0; k--){
            sum2 -= numbers[k];
            if(sum2 > max2) max2 = sum2;
        }
        if(max1 > max2) cout << max1 << endl;
        else cout << max2 << endl;
    }

    return 0;
}

