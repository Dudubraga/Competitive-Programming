#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef long long int lld;

int main(){
    lld n;
    while(cin >> n && n != 0){
        map<lld, bool>previous;
        cout << "Original number was " << n << endl;
        lld res = 0, length = 0;
        previous[n] = false;
        while(!previous[n]){
            previous[n] = true;
            string str = to_string(n);
            vector<int>num;
            for(int i = 0; i < str.size(); i++){
                num.push_back(str[i] - '0');
            }
            sort(num.begin(), num.end());
            string num1, num2;
            for(int i = 0; i < num.size(); i++){
                num1 += num[i] + '0';
                num2 += num[num.size()-1-i] + '0';
            }
            lld n1 = stoi(num1);
            lld n2 = stoi(num2);
            res = n2 - n1;
            cout << n2 << " - " << n1 << " = " << res << endl;
            length++;
            if(res != n){
                n = res;
                res = -1;
            }else{
                break;
            }
        }
        if(previous[n]){
            cout << "Chain length " << length << endl;
        }
        cout << endl;
    }

    return 0;
}

