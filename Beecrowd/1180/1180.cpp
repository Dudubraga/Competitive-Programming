/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1180 */
#include <iostream>
using namespace std;
 
int main(){
	int N, num, lowest = 10000, pos;
	cin >> N;
	int arr[N];
	for(int i = 0; i < N; i++){
		cin >> num;
		if(num < lowest){
			lowest = num;
			pos = i;
		}
		arr[i] = num;
	}
	printf("Menor valor: %d\nPosicao: %d\n", lowest, pos);

	return 0;
}

