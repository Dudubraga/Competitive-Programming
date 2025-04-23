#include <iostream>
#include <string>
using namespace std;

int main(){

    string n;
    bool lucky;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '4' || n[i] == '7'){
            count++;
        }
    }
    if(count == 7 || count == 4){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }    

    return 0;
}

