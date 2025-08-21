/* Problem statement: https://onlinejudge.org/external/4/410.pdf */
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int C, S, m, set = 1;
    while(cin >> C >> S){
        vector<int>masses;
        double imbalance = 0, sum = 0, AM = 0, CM = 0;
        for(int i = 0; i < S; i++){
            cin >> m;
            sum += m;
            masses.push_back(m);
        }
        for(int i = S; i < C*2; i++){
            masses.push_back(0);
        }
        AM = sum / C;
        sort(masses.begin(), masses.end());
        cout << "Set #" << set << endl; set++; 
        for(int i = 0; i < C; i++){
            cout << " " << i << ":";
            if(masses[i]){
                cout << " " << masses[i];
            }
            if(masses[C*2-i-1]){
                cout << " " << masses[C*2-i-1];
            }
            cout << endl;
            CM = masses[i] + masses[C*2-i-1];
            imbalance += abs(AM - CM);
        }
        printf("IMBALANCE = %.5lf\n\n", imbalance);
        masses.clear();
    }

    return 0;
}

