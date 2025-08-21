/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1026 */
#include <iostream>
using namespace std;

int main(){

    unsigned int a, b;
    while(cin >> a >> b){    
        cout << (a ^ b) << endl;
    }
    return 0;
}

