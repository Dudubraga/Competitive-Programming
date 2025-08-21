# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1144
n = int(input())

for i in range(1, n+1):
    a = i ** 2
    b = i ** 3
    print(f'{i} {a} {b}\n{i} {a+1} {b+1}')

