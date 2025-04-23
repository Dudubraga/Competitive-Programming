#include <iostream>
using namespace std;
 
int main(){
    int arr[20];
    for(int i = 0; i < 20; i++){
	    cin >> arr[i];      
    }
    for(int j = 0; j < 20; j++){
	    printf("N[%d] = %d\n", j, arr[20-j-1]);
    }
 
    return 0;
}

