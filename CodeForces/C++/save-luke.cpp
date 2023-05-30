#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double luke, left, right, v1, v2, distance, speed;
    left = 0;
    cin >> luke >> right >> v1 >> v2;
    distance = right - left - luke;
    speed = v1 + v2;

    double time = distance / speed;
    cout << setprecision(20) << fixed << time << "\n";

    return 0;
}