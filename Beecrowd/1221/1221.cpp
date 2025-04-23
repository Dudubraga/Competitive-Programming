#include <iostream>
#include <cmath>
using namespace std;

int main(){
        int T, prime;
        long long int N;
        cin >> T;
        for(int i = 0; i < T; i++){
                prime = 1;
                cin >> N;
                for(int j = 2; j <= sqrt(N); j++){
                        if(N % j == 0){
                                prime = 0;
                        }
                }
                if(prime == 1){ cout << "Prime" << endl; }
                else{ cout << "Not Prime" << endl; }
        }

        return 0;
}

