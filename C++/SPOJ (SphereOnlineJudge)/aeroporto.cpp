#include <iostream>
#include <vector>
using namespace std;

int main(){
    int A, V, x, y, T = 1;
    vector<int>flights;
    vector<int>visited;
    while(cin >> A >> V){
        if(A == 0 && V == 0) break;
        int visits = 0;
        for(int i = 0; i < V; i++){
            cin >> x >> y;
            flights.push_back(x);
            flights.push_back(y);
        }
        int airports[A];
        for(int j = 0; j < A; j++){
            airports[j] = 0;
        }
        for(int i = 0; i < V*2; i++){
            for(int j = 1; j <= A; j++){
                if(flights[i] == j){
                    airports[j-1]++;
                }
            }
        }
        for(int i = 0; i < A; i++){
            if(airports[i] > visits){
                visits = airports[i];
            }
        }
        for(int j = 0; j < A; j++){
            if(airports[j] == visits){
                visited.push_back(j+1);
            }
        }
        int size = visited.size();
        cout << "Teste " << T << endl;
        for(int i = 0; i < size; i++){
            if(i == size-1) cout << visited[i] << endl;
            else cout << visited[i] << " ";
        }
        cout << endl;
        T++;
        flights.clear();
        visited.clear();
    }

    return 0;
}

/* AERO - Aeroporto
https://br.spoj.com/problems/AERO/ */