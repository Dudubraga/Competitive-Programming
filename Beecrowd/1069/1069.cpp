#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t; scanf("%d\n", &t);
    while(t--){
        string str; getline(cin, str);
        vector<char>s;
        int diamonds = 0;
        for(int i = 0; i < str.length(); i++){
            if(str[i] != '.'){
                if(str[i] == '<'){
                    s.push_back(str[i]);
                }else{
                    if(!s.empty()){
                        s.pop_back();
                        diamonds++;
                    }
                }
            }
        }
        s.clear();
        cout << diamonds << endl;
    }

    return 0;
}

