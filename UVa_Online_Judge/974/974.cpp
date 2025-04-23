#include <iostream>
using namespace std;

int main(){
    int ans[19] = {9,45,55,99,297,703,999,2223,2728,4879,4950,5050,5292,7272,7777,9999,17344,22222,38962};
    int t, inf, sup;
    cin >> t;
    for(int i = 1; i <= t; i++){
        bool kaprekar = false;
        cout << "case #" << i << endl;
        cin >> inf >> sup;
        for(int j = inf; j <= sup; j++){
            for(int k = 0; k < 19; k++){
                if(j == ans[k]){
                    cout << j << endl;
                    kaprekar = true;
                }
            }
        }
        if(kaprekar == false){
            cout << "no kaprekar numbers" << endl;
        }
        if(i < t){ cout << endl; }
    }

    return 0;
}

