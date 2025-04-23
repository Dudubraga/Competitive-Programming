#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main(){
    int N, x;
    map<int, int>votes;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x;
        votes[x] += 1;
    }
    map<int, int>::iterator itr;
    int max = 0, winner;
    for(itr = votes.begin(); itr != votes.end(); itr++){
        if(itr->second > max){
            max = itr->second;
            winner = itr->first;
        }
    }
    cout << winner << endl;

    return 0;
}

