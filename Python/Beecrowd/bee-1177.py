T = int(input())
arr = []
num = 0
for i in range(0, 1000):
    if num == T:
        num = 0
    arr.append(num)
    num += 1
for j in range(0, 1000):
    print(f'N[{j}] = {arr[j]}')

# 1177 - Array Fill II
# https://www.beecrowd.com.br/judge/en/problems/view/1177