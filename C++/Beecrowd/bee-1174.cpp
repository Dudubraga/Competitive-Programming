#include <iostream>
using namespace std;

int main(){
    float arr[100];
    for(int i = 0; i < 100; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < 100; j++){
        if(arr[j] <= 10.0){
            printf("A[%d] = %0.1f\n", j, arr[j]);
        }
    }

    return 0;
}

/* 1174 - Array Selection I
https://www.beecrowd.com.br/judge/en/problems/view/1174 */