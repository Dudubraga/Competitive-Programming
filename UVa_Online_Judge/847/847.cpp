#include <iostream>
using namespace std;

int main(){
    long long int n;
    while(cin >> n){
        if(n < 10){ cout << "Stan wins." << endl; }
        else{
            bool stan = true;
            long long int p = 1;
            while(p < n){
                if(stan){ p *= 9; stan = !stan; }
                else{ p *= 2; stan = !stan; }
            }
            if(!stan){ cout << "Stan wins." << endl; }
            else{ cout << "Ollie wins." << endl; }
        }
    }

    return 0;
}

