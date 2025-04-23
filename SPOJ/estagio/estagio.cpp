#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, T = 1;
    int c, m;
    vector<int>code;
    vector<int>media;
    vector<int>highest;
    while(cin >> N){
        if(N == 0) break;
        int best = 0;
        for(int i = 0; i < N; i++){
            cin >> c >> m;
            code.push_back(c);
            media.push_back(m); 
        }
        for(int j = 0; j < N; j++){
            if(media[j] > best){
                best = media[j];
            }
        }
        for(int k = 0; k < N; k++){
            if(media[k] == best){
                highest.push_back(code[k]);
            }
        }
        int size = highest.size();
        cout << "Turma " << T << endl;    
        for(int i = 0; i < size; i++){
            if(i == size-1) cout << highest[i] << endl;
            else cout << highest[i] << " ";
        }
        cout << endl;
        T++;
        code.clear();
        media.clear();
        highest.clear();
    }

    return 0;
}

