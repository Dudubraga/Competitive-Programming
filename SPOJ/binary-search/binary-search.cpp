#include <iostream>
#include <vector>
using namespace std;

vector<int>numbers;

int Verify(int key, int mid, int low){
    while(mid > low && key == numbers[mid-1]){
        mid--;
    }
    return mid;
} 

int BinSearch(int key, int high, int low){
    if(low > high || numbers[low] > key || numbers[high] < key){
        return -1;
    }
    else{
        while(low <= high){
            int mid = (high + low) / 2;
            if(numbers[mid] > key){
                high = mid - 1;
            }
            else if(numbers[mid] < key){
                low = mid + 1;
            }
            else{
                return Verify(key, mid, low);
            }
        }
        return -1;
    }
}

int main(){
    int n, q, key, num;
    scanf("%d %d", &n, &q);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        numbers.push_back(num);
    }
    int high = numbers.size();
    int low = 0;
    for(int j = 0; j < q; j++){
        scanf("%d", &key);
       printf("%d\n", BinSearch(key, high-1, low));
    }
    return 0;
}

