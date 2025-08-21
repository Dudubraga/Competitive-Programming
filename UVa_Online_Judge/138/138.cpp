/* Problem statement: https://onlinejudge.org/external/1/138.pdf */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> house = {"6", "35", "204", "1189", "6930", "40391", "235416", "1372105", "7997214", "46611179"};
    vector<string> last = {"8", "49", "288", "1681", "9800", "57121", "332928", "1940449", "11309768", "65918161"};
    vector<int>spaces1;
    vector<int>spaces2;
    int size1;
    int size2;

    for(int i = 0; i < house.size(); i++){
        size1 = 8 - house[i].size();
        spaces1.push_back(size1);
    }

    for(int i = 0; i < last.size(); i++){
        size2 = 10 - last[i].size();
        spaces2.push_back(size2);
    }

    for(int j  = 0; j < house.size(); j++){
        cout << "  ";
        for(int k = 0; k < spaces1[j]; k++){
            cout << " ";
        }
        cout << house[j];
        for(int k = 0; k < spaces2[j]; k++){
            cout << " ";
        } 
        cout << last[j] << endl;
    }

    return 0;
}

