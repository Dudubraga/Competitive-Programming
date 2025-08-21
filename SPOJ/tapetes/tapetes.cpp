/* Problem statement: https://br.spoj.com/problems/TAPETE14/ */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int L, N;
    long long max_area;
    cin >> L >> N;
    max_area = pow((L-(N-1)),2) + (N-1);
    cout << max_area << endl;

    return 0;
}

