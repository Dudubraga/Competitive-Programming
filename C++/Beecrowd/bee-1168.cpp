#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, leds[10] = {6,2,5,5,4,5,6,3,7,6};
    cin >> N;
    string num;
    for(int i = 0; i < N; i++){
        cin >> num;
        int size = num.size(), ans = 0;
        for(int j = 0; j < size; j++){
            ans += leds[num[j] - '0'];
        }
        cout << ans << " leds" << endl;
    }

    return 0;
}

/* 1168 - LED
https://www.beecrowd.com.br/judge/en/problems/view/1168 */