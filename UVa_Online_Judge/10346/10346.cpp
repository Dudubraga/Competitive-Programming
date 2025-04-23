#include <iostream>
using namespace std;

int main(){
    int n, k;
    while(cin >> n >> k){
        int cigarettes = 0, butts = n;
        while(butts >= k){
            cigarettes += butts / k;
            butts = (butts / k) + (butts % k); 
        }
        cout << cigarettes + n << endl;
    }

    return 0;
}

