/* Problem statement: https://onlinejudge.org/external/124/12468.pdf */
#include <iostream>
using namespace std;

int main(){
    int c1, c2;
    while(cin >> c1 >> c2 && (c1 != -1 && c2 != -1)){
        int a = abs(min(c1,c2)+100 - max(c1,c2));
        int b = abs(c1 - c2);
        if(a >= b){
            cout << b << endl; 
        }else{
            cout << a << endl;
        }
    }

    return 0;
}

