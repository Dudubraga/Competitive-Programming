/* Problem statement: https://onlinejudge.org/external/119/11988.pdf */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        list<char> texto;
        auto it = texto.end();
        for (char c : s) {
            if (c == '[') {
                it = texto.begin();
            } else if (c == ']') {
                it = texto.end();
            } else {
                texto.insert(it, c);
            }
        }
        for (char c : texto) cout << c;
        cout << endl;
    }
    return 0;
}