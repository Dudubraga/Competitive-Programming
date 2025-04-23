#include <iostream>
#include <vector>
using namespace std;

vector<int>houses;

int Verify(int key, int mid, int low){
    while(mid > low && key == houses[mid-1]){
        mid--;
    }
    return mid;
} 

int BinSearch(int key, int high, int low){
    if(low > high || houses[low] > key || houses[high] < key){
        return -1;
    }
    else{
        while(low <= high){
            int mid = (high + low) / 2;
            if(houses[mid] > key){
                high = mid - 1;
            }
            else if(houses[mid] < key){
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
    int N, K, h;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> h;
        houses.push_back(h);
    }
    cin >> K;
    int high = N-1, low = 0;
    int toy, find;
    for(int j = 0; j < N; j++){
        find = K - houses[j];
        toy = BinSearch(find, high, low);
        if(toy > 0){
            printf("%d %d\n", houses[j], find);
            break;
        }
    }

    return 0;
}

