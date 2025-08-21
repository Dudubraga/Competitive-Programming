/* Problem statement: https://br.spoj.com/problems/SENHA/ */
#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main(){
    int n, t = 1;
    while(cin >> n && n != 0){
        int possible[6][n*2];
        for(int i = 0; i < n; i++){
            int nums[10];
            for(int j = 0; j < 10; j++){ cin >> nums[j]; }
            int k = 0 + i*2;
            for(int j = 0; j < 6; j++){
                char c; cin >> c;
                if(c == 'A'){
                    possible[j][k] = nums[0];
                    possible[j][k+1] = nums[1];
                } 
                if(c == 'B'){
                    possible[j][k] = nums[2];
                    possible[j][k+1] = nums[3];
                } 
                if(c == 'C'){
                    possible[j][k] = nums[4];
                    possible[j][k+1] = nums[5];
                } 
                if(c == 'D'){
                    possible[j][k] = nums[6];
                    possible[j][k+1] = nums[7];
                } 
                if(c == 'E'){
                    possible[j][k] = nums[8];
                    possible[j][k+1] = nums[9];
                }
            }
        }
        int ans[6];
        for(int i = 0; i < 6; i++){
            map<int, int>password;
            for(int j = 0; j < n*2; j++){
                password[possible[i][j]] += 1;
            }
            int max = 0;
            map<int, int>::iterator itr;
            for(itr = password.begin(); itr != password.end(); itr++){
                if(itr->second > max){
                    max = itr->second;
                    ans[i] = itr->first;
                }
            }
        }
        cout << "Teste " << t << endl;
        for(int i = 0; i < 6; i++){
            cout << ans[i] << " ";
        } cout << endl << endl;
        t++;
    }

    return 0;
}

