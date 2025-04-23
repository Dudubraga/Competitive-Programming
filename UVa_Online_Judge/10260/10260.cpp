#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        string ans = ""; int index = -1; char num; bool p = true;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'B' || str[i] == 'F' || str[i] == 'P' || str[i] == 'V'){
                num = '1';
            }
            else if(str[i] == 'C' || str[i] == 'G' || str[i] == 'J' || str[i] == 'K' 
                || str[i] == 'Q' || str[i] == 'S' || str[i] == 'X' || str[i] == 'Z'){
                num = '2';
            }
            else if(str[i] == 'D' || str[i] == 'T'){
                num = '3';
            }
            else if(str[i] == 'L'){
                num = '4';
            }
            else if(str[i] == 'M' || str[i] == 'N'){
                num = '5';
            }
            else if(str[i] == 'R'){
                num = '6';
            }
            else{
                num = '0';
            }
            if(ans[index] == '0'){ ans[index] = num; }
            else if(num != ans[index]){ ans += num; index++; }
        }
        if(ans[index] == '0'){ ans.pop_back(); }
        cout << ans << endl;
    }

    return 0;
}

