#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n == 1 || n == 2 || n == 3){
        return true;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N; cin >> N;
    int div, arr[N], index = 0;
    for(int i = 2; i <= N; i++){
        if(isPrime(i)){
            div = i;
            while(div <= N){
                arr[index] = div;
                div *= i; index++;
            }
        }
    }
    cout << index << endl;
    for(int i = 0; i < index; i++){
        cout << arr[i];
        if(i != index-1){
            cout << " ";
        }
    } cout << endl;

    return 0;
}

