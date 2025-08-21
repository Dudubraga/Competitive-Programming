/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1173 */
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, N);
        N *= 2;
    }

    return 0;
}

