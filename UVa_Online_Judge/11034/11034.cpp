#include <iostream>
#include <utility>
#include <vector>
#include <queue>
using namespace std;

void printQ(queue<int>Q){
    queue<int>q = Q;
    cout << endl;
    while(!q.empty()){
        cout << q.front() << " " << q.front() << endl;
        q.pop();
    } cout << endl;
}

int main(){
    int t; cin >> t;
    //vector<pair<int, int>>cars;
    while(t--){
        queue<int>carsL;
        queue<int>carsR;
        int ferry, car, size;
        string lf;
        cin >> ferry >> car;
        for(int i = 0; i < car; i++){
            cin >> size >> lf;
            if(lf == "left"){ carsL.push(size); }
            else{ carsR.push(size); }
        }
//printQ(carsL);
        ferry *= 100;
        int side = 0, crosses = 0, C = 0, F = ferry;

        while(C < car){
            if(side == 0){
                if(F - carsL.front() >= 0 && carsL.empty() == false){
                    F -= carsL.front();
                    carsL.pop();
                    C++;
                }else{
                    crosses++;
                    F = ferry;
                    side = 1;
                }
            }else{
                if(F - carsR.front() >= 0 && carsR.empty() == false){
                    F -= carsR.front();
                    carsR.pop();
                    C++;
                }else{
                    crosses++;
                    F = ferry;
                    side = 0;
                }
            }
        }

        cout << crosses+1 << endl;
    }

    return 0;
}

