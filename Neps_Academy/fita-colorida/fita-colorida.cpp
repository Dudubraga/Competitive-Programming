/* Problem statement: https://neps.academy/br/exercise/49 */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, fita;
    vector<int>cores;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> fita; 
        cores.push_back(fita);
    }
    int tone = 0;
    while(tone <= 9){
        for(int j = 0; j < N; j++){
            if(cores[j] == tone){
                if(cores[j-1] == -1) cores[j-1] = tone+1;
                if(cores[j+1] == -1) cores[j+1] = tone+1;
            }
        }
        tone++;
    }
    for(int k = 0; k < N; k++){
        if(cores[k] == -1 || cores[k] == 10){
            cores[k] = 9;
        }
    }
    for(int l = 0; l < N; l++){
        if(l != N-1) cout << cores[l] << " ";
        else cout << cores[l] << endl;
    }

    return 0;
}

