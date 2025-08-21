/* Problem statement: https://codeforces.com/contest/1215/problem/A */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tA, tB, kA, kB, cards;
    cin >> tA >> tB >> kA >> kB >> cards;
    int out_max = 0, out_min = 0;
    /* menor out */
    int minA = (tA * (kA-1));
    int minB = (tB * (kB-1));
    if(minA + minB >= cards){
        out_min = 0;
    }else{
        out_min = cards - (minA + minB);
    }
    /* maior out */
    int maxA, maxB;
    if(kA > kB){
        maxB = min(tB, cards / kB);
        cards -= maxB * kB;
        maxA = min(tA, cards / kA);
        out_max = maxA + maxB;
    }else{
        maxA = min(tA, cards / kA);
        cards -= maxA * kA;
        maxB = min(tB, cards / kB);
        out_max = maxA + maxB;
    }
    
    cout << out_min << " " << out_max << endl;

    return 0;
}

