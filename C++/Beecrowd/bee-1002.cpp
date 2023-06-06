#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){

    double a, r, PI = 3.14159;;
    cin >> r;
    a = PI * r * r;
    
    cout << "A=" << setprecision(4) << fixed << a << "\n";
 
    return 0;
}

/* 1002 - Area of a Circle
https://www.beecrowd.com.br/judge/en/problems/view/1002 */