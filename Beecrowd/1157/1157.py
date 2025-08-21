# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1157
n = int(input())
x = n + 1

for i in range(1, x):
        if n % i == 0:
                print(i)

