#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, B, x;
    vector<int>num;
    vector<int>remain;
    while(1){
        cin >> N >> B;
        if(N == 0 && B == 0) break;
        for(int i = 0; i <= N; i++){
            num.push_back(i);
        }
        for(int j = 0; j < B; j++){
            cin >> x;
            remain.push_back(x);
        }
        int count = 0;
        for(int i = 0; i <= N; i++){
            for(int j = 0; j < B; j++){
                if(num[i] == remain[j]){
                    num[i] = -1;
                    count++;
                }
            }
        }
        int dif;
        for(int i = 0; i < B-1; i++){
            for(int j = i+1; j < B; j++){
                dif = remain[i] - remain[j];
                for(int k = 0; k < N; k++){
                    if(abs(dif) == num[k]){
                        num[k] = -1;
                        count++;
                    }
                }
            }
        }
        if(count == N+1) cout << "Y" << endl;
        else cout << "N" << endl;
        
        remain.clear();
        num.clear();
    }
}

