#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int queries, count = 0;
    string S;
    vector<int>answer;
    cin >> S >> queries;
    answer.push_back(0);
    for(int i = 0; i < S.size()-1; i++){
        if(S[i] == S[i+1]){
            count++;
        }
        answer.push_back(count);
    }
    int l, r;
    for(int j = 0; j < queries; j++){
        cin >> l >> r;
        cout << answer[r-1] - answer[l-1] << endl;
    }

    return 0;
}

