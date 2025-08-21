/* Problem statement: https://br.spoj.com/problems/JESCADA/ */
#include <iostream>
using namespace std;

int main(){
    int N, seconds = 10;
    int time[N];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> time[i];
    }
    for(int j = 1; j < N; j++){
        if(time[j] < (time[j-1] + 10)){
            seconds += (time[j] - time[j-1]);
        }else{
            seconds += 10;
        }
    }
    cout << seconds << endl;
    return 0;
}

