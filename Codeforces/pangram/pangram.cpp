/* Problem statement: https://codeforces.com/problemset/problem/520/A */
#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, count = 0;
    int alphabet[26];
    char abc = 97, ABC = 65;
    string word;
    cin >> N; 
    cin >> word;
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < N; j++){
            if(word[j] == abc){
                alphabet[i] = 1;
                break;
            }
            else if(word[j] == ABC){
                alphabet[i] = 1;
                break;
            }
            else{
                alphabet[i] = -1;   
            }
        }    
        abc++;
        ABC++;
    }
    for(int k = 0; k < 26; k++){
        if(alphabet[k] == 1) count++;
    }
    if(count != 26) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}

