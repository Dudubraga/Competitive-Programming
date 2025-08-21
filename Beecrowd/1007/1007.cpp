/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1007 */
#include <iostream>
using namespace std;
 
int main(){
    int a, b, c, d, x;
    cin >> a >> b >> c >> d;
    x = (a * b - c * d);
    cout << "DIFERENCA = " << x << "\n";
 
    return 0;
}