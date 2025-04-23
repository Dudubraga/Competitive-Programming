#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double num, a, a3;
    while(cin >> num && num != 0.0){
        a = floor(pow(num, 1/3.0) + 1e-6); 
        a3 = pow(a,3);
        double dx = (num-a3) / (3*pow(a,2));
        double ans = a + dx;
        printf("%.4lf\n", ans);
    }
    return 0;
}

