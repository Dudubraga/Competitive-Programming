#include <iostream>
using namespace std;

int main(){

    int columns, rows, knights, board, x;
    while(true){
        cin >> rows >> columns;
        if(columns == 0 || rows == 0){ 
            break;
        }
        board = columns * rows;
        if(columns == 1 || rows == 1){
            knights = columns * rows;
        }
        else {
            if(columns == 2 || rows == 2){
                if(columns >= rows){
                    x = columns;
                } else {
                    x = rows;
                }
                if(x <= 3){
                    for(int i = 0; i < 3; i++){
                        knights = 4;
                    }
                } else {
                    for(int i = 0; i < 3; i++){
                        knights = 4;
                    }
                    for(int j = 3; j < x; j++){
                        if(j % 4 == 0 || j % 4 == 1){
                            knights += 2;
                        } else {
                            knights = knights; 
                        }
                    }
                }
            }
            else if(board % 2 == 0){
                knights = board / 2;
            } else {
                knights = (board + 1) / 2;
            }
        }
        cout << knights << " knights may be placed on a " << rows << " row " << columns << " column board.\n";
    }
 
    return 0;   
}

/* 696 - How Many Knights
https://onlinejudge.org/external/6/696.pdf */