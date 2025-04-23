#include <iostream>
using namespace std;

int main(){
    int d, sumTime; cin >> d >> sumTime;
    int minTime[d], maxTime[d];
    int sumMin = 0, sumMax = 0;
    for(int i = 0; i < d; i++){
        cin >> minTime[i] >> maxTime[i];
        sumMin += minTime[i];
        sumMax += maxTime[i];
    }
    if(sumTime < sumMin || sumTime > sumMax){ cout << "NO" << endl; }
    else{
        int dTimes[d], sumD = 0;
        for(int i = 0; i < d; i++){
            dTimes[i] = maxTime[i];
            sumD += maxTime[i];
        }
        int j = 0;
        while(sumD > sumTime && j < d){
            while(dTimes[j] > minTime[j] && sumD > sumTime){
                sumD--;
                dTimes[j]--;
            }
            j++;
        }
        cout << "YES" << endl;
        for(int i = 0; i < d; i++){
            cout << dTimes[i] << " ";
        }
    }

    return 0;
}

