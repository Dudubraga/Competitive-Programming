# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1172
arr = []
for i in range(0, 10):
    x = int(input())
    if x <= 0:
        x = 1
    arr.append(x)

for i in range(0, 10):
    print(f'X[{i}] = {arr[i]}')

