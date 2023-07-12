#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
using namespace std;

double distance(int xa, int ya, int xb, int yb){
    double distX = pow((xa - xb), 2);
    double distY = pow((ya - yb), 2);
    double dist = sqrt(distX + distY);
    
    return dist;
}

int main(){
    int N, x, y;
    vector<int>X;
    vector<int>Y;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        X.push_back(x);
        Y.push_back(y);
    }

    double D = 2000000;
    for(int j = 0; j < N-1; j++){
        for(int k = j+1; k < N; k++){
            if(distance(X[j],Y[j],X[k],Y[k]) < D){
                D = distance(X[j],Y[j],X[k],Y[k]);
            }
        }
    }

    cout << setprecision(3) << fixed << D << endl;
    
    return 0;
}

/* PARPROX - Pontos
https://br.spoj.com/problems/PARPROX/ */