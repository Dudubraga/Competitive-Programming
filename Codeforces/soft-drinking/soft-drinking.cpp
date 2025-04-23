#include <iostream>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int liquid, slices, salt, toasts;
    liquid = k * l / nl;
    slices = c * d;
    salt = p / np;
    
    if(liquid <= slices && liquid <= salt){
        toasts = liquid / n;
    }
    else if(slices <= liquid && slices <= salt){
        toasts = slices / n;
    }
    else if(salt <= liquid && salt <= slices){
        toasts = salt / n;
    }

    cout << toasts;

    return 0;
}

