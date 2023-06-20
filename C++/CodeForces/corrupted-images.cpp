#include <iostream>
using namespace std;

int main(){
    int t, rows, columns;
    char num;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> rows >> columns;
        int count1 = 0;
        char binImage[rows][columns];
        for(int j = 0; j < rows; j++){
            for(int k = 0; k < columns; k++){
                cin >> num;
                if(num == '1') count1++;
                binImage[j][k] = num;
            }
        }
        int p = (rows * 2) + ((columns-2) * 2);
        if(count1 >= p){
            int missing = 0;
            for(int x = 0; x < rows; x++){
                if(binImage[x][0] == '0') missing++;
                if(binImage[x][columns-1] == '0') missing++;
            }
            for(int y = 1; y < columns-1; y++){
                if(binImage[0][y] == '0') missing++;
                if(binImage[rows-1][y] == '0') missing++;
            }
            cout << missing << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}

/* 101532H - Corrupted Images
https://codeforces.com/gym/101532/problem/H */