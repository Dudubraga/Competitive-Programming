#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N;
    vector<string>names;
    vector<int>gifts;
    string name;
    while(cin >> N){
        int cash, people, pos1, pos2;
        for(int i = 0; i < N; i++){
            cin >> name;
            names.push_back(name);
            gifts.push_back(0);
        }
        for(int j = 0; j < N; j++){
            cin >> name >> cash >> people;
            for(int k = 0; k < N; k++){
                if(name == names[k]){ pos1 = k; }
            }
            gifts[pos1] -= cash;
            for(int l = 0; l < people; l++){
                cin >> name;
                for(int m = 0; m < N; m++){
                    if(name == names[m]){ pos2 = m; }
                }
                gifts[pos2] += cash / people;
            }
            gifts[pos1] += cash % people;
        }
        for(int i = 0; i < N; i++){
            cout << gifts[i] << " ";
        } cout << endl;
    }

    return 0;
}

/* 119 - Greedy Gift Givers
https://onlinejudge.org/external/1/119.pdf */