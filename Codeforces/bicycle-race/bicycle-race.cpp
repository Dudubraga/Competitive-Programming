#include <iostream>
using namespace std;

int main(){
    int t; cin >> t; 
    int x0, y0; cin >> x0 >> y0; t--;
    int danger = 0; char way = 'N';
    while(t--){
        int x1, y1; cin >> x1 >> y1;
        int left;
        if(way == 'N'){
            if(x1 > x0){ left = 0; way = 'E'; }
            if(x1 < x0){ left = 1; way = 'W'; }
        }
        else if(way == 'E'){
            if(y1 > y0){ left = 1; way = 'N'; }
            if(y1 < y0){ left = 0; way = 'S'; }
        }
        else if(way == 'W'){
            if(y1 > y0){ left = 0; way = 'N'; }
            if(y1 < y0){ left = 1; way = 'S'; }
        }
        else if(way == 'S'){
            if(x1 > x0){ left = 1; way = 'E'; }
            if(x1 < x0){ left = 0; way = 'W'; }
        }
        if(left == 1){ danger++; }
        x0 = x1; y0 = y1;
    }
    printf("%d\n", danger);
    
    return 0;
}

