/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1089 */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, H, peaks;
    vector<int>wave;
    while(cin >> N && N != 0){
        for(int i = 0; i < N; i++){
            cin >> H;
            wave.push_back(H);
        }
        wave.push_back(wave[0]);
        peaks = 0;
        for(int j = 1; j < N; j++){
            if(wave[j] > wave[j-1] && wave[j] > wave[j+1]){
                peaks++;
            }
            if(wave[j] < wave[j-1] && wave[j] < wave[j+1]){
                peaks++;
            }
        }
        if(wave[0] > wave[N-1] && wave[0] > wave[1]){ peaks++; }
        if(wave[0] < wave[N-1] && wave[0] < wave[1]){ peaks++; }
        
        cout << peaks << endl;
        wave.clear();
    }

    return 0;
}

