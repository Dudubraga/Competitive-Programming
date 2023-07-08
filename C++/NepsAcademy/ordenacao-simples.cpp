#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, num;
    vector<int>sequence;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        sequence.push_back(num); 
    }
    sort(sequence.begin(), sequence.end());
    
    for(int j = 0; j < N; j++){
        if(j == N-1) cout << sequence[j] << endl;
        else cout << sequence[j] << " ";
    }

    return 0;
}

/* Ordenação Simples
https://neps.academy/br/exercise/176 */