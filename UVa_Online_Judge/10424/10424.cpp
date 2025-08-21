/* Problem statement: https://onlinejudge.org/external/104/10424.pdf */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string str1, str2;
    while(getline(cin, str1)){
        getline(cin, str2);
        int num1 = 0, num2 = 0;
        for(int i = 0; i < int(str1.size()); i++){
            if(str1[i] <= 90 && str1[i] >= 65){
                num1 += int(str1[i]) - 64;
            }
            else if(str1[i] <= 122 && str1[i] >= 97){
                num1 += int(str1[i]) - 96;
            }
        }
        for(int i = 0; i < int(str2.size()); i++){
            if(str2[i] <= 90 && str2[i] >= 65){
                num2 += int(str2[i]) - 64;
            }
            else if(str2[i] <= 122 && str2[i] >= 97){
                num2 += int(str2[i]) - 96;
            }
        }
        while(num1 > 9){
            string s1 = to_string(num1);
            int n1 = 0;
            for(int j = 0; j < int(s1.size()); j++){
                n1 += (s1[j] - '0'); 
            }
            num1 = n1;
        }
        while(num2 > 9){
            string s2 = to_string(num2);
            int n2 = 0;
            for(int j = 0; j < int(s2.size()); j++){
                n2 += (s2[j] - '0'); 
            }
            num2 = n2;
        }
        double a = max(num1, num2), b = min(num1, num2);
        double ans = double(b) / double(a) * 100;
        cout << fixed << setprecision(2) << ans << " %" << endl;
    }

    return 0;
}

