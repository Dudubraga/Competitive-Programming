#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    while(cin >> size){
        vector<int>num;
        int n;
        for(int i = 0; i < size; i++){
            cin >> n;
            num.push_back(n);
        }
        int count = 0;
        for(int i = 0; i <= size; i++){
            for(int j = 0; j < size-1; j++){
                int temp;
                if(num[j] > num[j+1]){
                    temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    count++;
                }
            }

        }
        cout << "Minimum exchange operations : " << count << endl;
        count = 0;
        num.clear();
    }
    return 0;
}

/* 10327 - Flip Sort
https://onlinejudge.org/external/103/10327.pdf */