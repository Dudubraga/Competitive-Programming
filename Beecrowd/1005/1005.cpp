#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    double a, b, x;
    cin >> a >> b;
    x = (a * 3.5 + b * 7.5) / 11;   
    cout << "MEDIA = " << setprecision(5) << fixed << x << "\n";
    
    return 0;
}