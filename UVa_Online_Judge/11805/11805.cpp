/* Problem statement: https://onlinejudge.org/external/118/11805.pdf */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T, N, start, P;
    vector<int>players;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> N >> start >> P;
        for(int j = 0; j < N; j++){
            players.push_back(j+1);
        }
        for(int k = 0; k < P; k++){
            start++;
            if(start == N+1){
                start = 1;
            }
        }
        cout << "Case " << i << ": " << start << endl;
    }

    return 0;
}

