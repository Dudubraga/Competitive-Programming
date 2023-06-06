#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b || a == c || b == c){
        cout << "S\n";}
    else if(a + b == c || a + c == b || b + c == a){
        cout << "S\n";}
    else{
        cout << "N\n";}

    return 0;
}

/* 2235 - Walking in Time
https://www.beecrowd.com.br/judge/en/problems/view/2235 */