#include <iostream>
using namespace std;

int main(){
    long long n, m; cin >> n >> m;
    long long rectangle[n][m];
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            cin >> rectangle[i][j];
        }
    }
    long long pow[51], p = 1;
    pow[0] = 1;
    for(int i = 1; i <= 50; i++){
        pow[i] = p * 2;
        p *= 2;
    }
    long long sets = 0;
    for(long long i = 0; i < n; i++){
        long long black = 0, white = 0;
        for(long long j = 0; j < m; j++){
            if(rectangle[i][j] == 0){ black++; }
            else{ white++; }
        }
        sets += pow[black] - 1; 
        sets += pow[white] - 1; 
    }
    for(long long j = 0; j < m; j++){
        long long black = 0, white = 0;
        for(long long i = 0; i < n; i++){
            if(rectangle[i][j] == 0){ black++; }
            else{ white++; }
        }
        sets += pow[black] - 1; 
        sets += pow[white] - 1;
    }
    sets -= n * m;
    cout << sets << endl;

    return 0;
}

