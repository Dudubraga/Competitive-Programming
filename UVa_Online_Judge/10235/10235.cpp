/* Problem statement: https://onlinejudge.org/external/102/10235.pdf */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        int size = str.size(), change = 0;
        int N1 = 0, N2 = 0;
        for(int i = 0; i < size; i++){ // normal
            int n = str[i] - '0';
            N1 += (n * pow(10,(size-1)-i)); 
        }
        for(int i = 0; i < size; i++){ // reverso
            int n = str[i] - '0';
            N2 += (n * pow(10, i)); 
        }
        int prime1 = 0, prime2 = -1;
        for(int j = 2; j <= sqrt(N1); j++){
            if(N1 % j == 0){ prime1++; }
        }
        if(N1 != N2){
            prime2 = 0;
            for(int j = 2; j <= sqrt(N2); j++){
                if(N2 % j == 0){ prime2++; }
            }
        }
        if(prime1 == 0 && prime2 == 0){ cout << N1 << " is emirp." << endl; }
        else if(prime1 == 0 && prime2 != 0){ cout << N1 << " is prime." << endl; }
        else{ cout << N1 << " is not prime." << endl; }
    }

    return 0;
}

