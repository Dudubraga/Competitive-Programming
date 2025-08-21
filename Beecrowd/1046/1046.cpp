/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1046 */
#include <iostream>
using namespace std;

int main(){
    int start, finish, duration;
    cin >> start >> finish;
    
    if(start == finish) {duration = 24;}
    else if(start < finish) {duration = finish - start;}
    else if(start > finish) {duration = 24 - (start - finish);}
    
    cout << "O JOGO DUROU " << duration << " HORA(S)\n";

    return 0;
}

