#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M, O;
    vector<int>score;
    cin >> N >> M;
    int limits[N-1], prize[N];
    for(int i = 0; i < N-1; i++){ cin >> limits[i]; }
    for(int j = 0; j < N; j++){ cin >> prize[j]; }
    for(int k = 0; k < M; k++){
        cin >> O;
        if(O < limits[0]){ score.push_back(prize[0]); }
        else if(O >= limits[N-2]){ score.push_back(prize[N-1]); }
        else{
            int x = 0, sizeL = N-1;
            while(x < sizeL-1){
                if(O >= limits[x] && O < limits[x+1]){ 
                    score.push_back(prize[x+1]); 
                } x++;
            }
        }
    }
    for(int l = 0; l < M; l++){
        cout << score[l] << " ";
    } cout << endl;

    return 0;
}

