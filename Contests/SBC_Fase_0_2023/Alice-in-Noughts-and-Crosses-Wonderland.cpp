#include <iostream>
using namespace std;

int main(){
    char game[3];
    int X = 0, O = 0;
    for(int i = 0; i < 3; i++){
        cin >> game[i];
        if(game[i] == 'O'){ O++; }
    }
    if(O != 1){ cout << "?" << endl; }
    else if(game[1] == 'O'){
        cout << "*" << endl;
    }
    else{ cout << "Alice" << endl; }

    return 0;
}
