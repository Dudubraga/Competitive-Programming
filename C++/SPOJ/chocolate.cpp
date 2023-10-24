#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    if(N == 1 && M == 1){ cout << "Paula" << endl; }
    else{
    	if(N % (M+1) == 0){
        	cout << "Carlos" << endl;
    	}else{
        	cout << "Paula" << endl;
    	}
    }

    return 0;
}

/* CHOCPJ09 - Competiçăo de chocolate
https://br.spoj.com/problems/CHOCPJ09/ */
