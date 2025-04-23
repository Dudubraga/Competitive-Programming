#include <iostream>
using namespace std;

int main(){
    int N, M, l, r, x;
    cin >> N >> M;
    int book[N];
    for(int i = 0; i < N; i++){ cin >> book[i]; }
    for(int j = 0; j < M; j++){
        cin >> l >> r >> x;
        l--; r--; x--;
        int countL = 0, countR = 0;
        for(int a = l; a < x; a++){
            if(book[a] > book[x]){ countL++; }
        }
        for(int b = x; b <= r; b++){
            if(book[b] < book[x]){ countR++; }
        }
        if(countL == countR){ cout << "Yes" << endl; }
        else{ cout << "No" << endl; }
    }

    return 0;
}

