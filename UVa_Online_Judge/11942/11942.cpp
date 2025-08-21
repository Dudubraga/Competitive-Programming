/* Problem statement: https://onlinejudge.org/external/119/11942.pdf */
#include <iostream>
using namespace std;

int main(){
    int groups; cin >> groups;
    cout << "Lumberjacks:" << endl;
    while(groups--){
        int beards[10];
        for(int i = 0; i < 10; i++){ cin >> beards[i]; }
        int cre = 1;
        for(int i = 0; i < 9; i++){
            if(beards[i] < beards[i+1]){ cre++; }
        }
        int decre = 1;
        for(int i = 0; i < 9; i++){
            if(beards[i] > beards[i+1]){ decre++; }
        }
        if(cre == 10 || decre == 10){
            cout << "Ordered" << endl;
        }else{
            cout << "Unordered" << endl;
        }
    }

    return 0;
}

