/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1006 */
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    double a, b, c, x;
    cin >> a >> b >> c;
    x = (a * 2 + b * 3 + c * 5) / 10;
    cout << "MEDIA = " << setprecision(1) << fixed << x << "\n";
 
    return 0;
}