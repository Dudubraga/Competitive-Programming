# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1174
arr = []
for i in range(0, 100):
    arr.append(float(input()))

for j in range(0, 100):
    if arr[j] <= 10.0:
        print(f'A[{j}] = {arr[j]}')

