/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1080 */
#include <iostream>
using namespace std;

int main(){
    int n, highest = 0, position = 0;
    for(int i = 0; i < 100; i++){
        cin >> n;
        if(n > highest){
            highest = n;
            position = i;
        }
    }
    cout << highest << "\n" << position+1 << "\n";

    return 0;
}

