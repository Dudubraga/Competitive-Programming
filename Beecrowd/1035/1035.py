# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1035
a, b, c, d = map(int, input().strip().split())

x = c + d
y = a + b

if b > c and d > a and x > y and c > 0 and d > 0 and (a%2) == 0:
    print(f'Valores aceitos')        
else:
    print(f'Valores nao aceitos')

