#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int C, N, M;
    cin >> C;
    for(int i = 0; i < C; i++){
        cin >> N >> M;
        cout << floor(log10(pow(N, M))) + 1 << endl;
    }

    return 0;
}

