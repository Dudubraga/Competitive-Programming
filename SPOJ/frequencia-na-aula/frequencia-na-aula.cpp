/* Problem statement: https://br.spoj.com/problems/FREQUE12/ */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, num;
    vector<int>students;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        students.push_back(num);
    }
    sort(students.begin(), students.end());
    int count = 1;
    for(int j = 0; j < N-1; j++){
        if(students[j] != students[j+1]){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}

