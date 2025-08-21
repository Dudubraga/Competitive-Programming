/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/2653 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string>djk;
    string str;
    while(cin >> str){
        djk.insert(str);
        str.clear();
    }
    cout << djk.size() << endl;

    return 0;
}

