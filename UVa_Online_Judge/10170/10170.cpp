#include <iostream>
#include <stdbool.h>
using namespace std;

typedef long long ll;

int main(){
    ll s, d;
    while(cin >> s >> d){
        ll groupAct = s, sum = 0;
        while(1){
            sum += groupAct;
            if(sum >= d){
                cout << groupAct << endl;
                break;
            }
            groupAct++; 
        }
    }
    return 0;
}

