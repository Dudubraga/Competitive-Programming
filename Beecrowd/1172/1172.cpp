#include <iostream>
using namespace std;

int main(){
        int x;
        int arr[10];
        for(int i = 0; i < 10; i++){
                cin >> x;
                if(x <= 0){ x = 1; }
                arr[i] = x;
                printf("X[%d] = %d\n", i, arr[i]);
        }

        return 0;
}

