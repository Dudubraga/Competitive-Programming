# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1180
lowest = 1000
position = 0
N = int(input())
arr = list(map(int, input().split()))
for i in range(N):
    if arr[i] < lowest:
        lowest = arr[i]
        position = i
        
print(f'Menor valor: {lowest}\nPosicao: {position}')

