#include <iostream>
using namespace std;

int main(){
    int N, C, v;
    bool elected = true;
    cin >> N >> C;
    for(int i = 1; i < N; i++){
        cin >> v;
        if(v > C){ elected = false; }
    }
    if(elected == true){ cout << "S" << endl; }
    else{ cout << "N" << endl; }
 
    return 0;
}

