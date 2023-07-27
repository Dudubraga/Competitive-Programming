#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int N, L;
    cin >> N >> L;
    int lanterns[N];
    for(int i = 0; i < N; i++){
        cin >> lanterns[i];
    }
    int s = sizeof(lanterns) / sizeof(lanterns[0]);
    sort(lanterns, lanterns + s);
    
    int distance = 0, maxD = 0;
    for(int j = 0; j < N-1; j++){
        distance = lanterns[j+1] - lanterns[j];
        if(distance > maxD){ maxD = distance; }
    }
    double D;
    int start = lanterns[0];
    int end = L - lanterns[N-1];
    int middle = maxD / 2;
    if(maxD == 0 && start == 0 && end == 0){ D = 0.5; }
    else if(middle >= start && middle >= end){ D = maxD / 2.0; }
    else if(start >= middle && start >= end){ D = start; }
    else if(end >= middle && end >= start){ D = end; }
    cout << fixed << setprecision(10) << D << endl;

    return 0;
}

/* 492B - Vanya and Lanterns
https://codeforces.com/contest/492/problem/B */