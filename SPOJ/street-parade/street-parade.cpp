#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, c;
    while(cin >> N && N != 0){
        int cars[N];
        vector<int>line;
        vector<int>passed;
        for(int i = 0; i < N; i++){ cin >> cars[i]; }
        int count = 1, i = 0;
        while(count <= N){
            if(cars[i] == count){
                passed.push_back(cars[i]);
                count++;
            }
            else if(line.size() == 0){
                line.push_back(cars[i]);
            }
            else if(line[line.size()-1] == count){
                passed.push_back(line[line.size()-1]);
                count++;
                line.pop_back();
                i--;
            }
            else{ line.push_back(cars[i]); }
            if(i < N){ i++; }
            if(i == N && line[line.size()-1] != count){ break; }
        }
        if(passed.size() == N && line.size() == 0){
            cout << "yes" << endl;
        }else{ cout << "no" << endl; }
        line.clear(); passed.clear();
    }

    return 0;
}

