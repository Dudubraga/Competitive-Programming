#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, T, a;
    vector<int>B;
    cin >> N >> T;
    for(int i = 0; i < N; i++){
        cin >> a;
        B.push_back(a);
    }
    int start = 0, sum = 0, books = 0;
    for(int j = 0; j < N; j++){
        while(start < N && B[start] + sum <= T){
            sum += B[start];
            start++;
        }
        books = max(books, start - j);
        sum -= B[j];
    }
    cout << books << endl;

    return 0;
}
