#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int T, days, party, p;
    cin >> T;
    while(T--){
        cin >> days >> party;
        int arr[days];
        memset(arr, 0, sizeof(arr));
        for(int i = 0; i < party; i++){
            cin >> p;
            for(int j = 0; j < days; j++){
                if((j+1) % p == 0){ arr[j] += 1; }
            }
        }
        int friday = 5, sunday = 6;
        for(int i = 0; i < days; i++){
            if(i == friday){
                arr[i] = -1;
                friday += 7;
            }
            if(i == sunday){
                arr[i] = -1;
                sunday += 7;
            }
        }
        int hartal = 0;
        for(int i = 0; i < days; i++){
            if(arr[i] > 0){ hartal++; }
        }
        cout << hartal << endl;
    }

    return 0;
}

