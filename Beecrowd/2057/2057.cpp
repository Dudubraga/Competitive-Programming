#include <iostream>
using namespace std;

int main(){
    int S, T, F;
    cin >> S >> T >> F;
    int ans = S + T + F;
    if(ans >= 24){ ans -= 24; }
    if(ans < 0){ ans += 24; }
    cout << ans << endl;

    return 0;
}

