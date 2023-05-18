n = list(map(float, input().split()))
a, b, c = sorted(n)[::-1]

if a >= b + c:
    print('NAO FORMA TRIANGULO')
else:
    if a ** 2 == b ** 2 + c ** 2:
        print('TRIANGULO RETANGULO')
    elif a ** 2 > b ** 2 + c ** 2:
        print('TRIANGULO OBTUSANGULO')
        if a == b == c:
            print('TRIANGULO EQUILATERO')
        elif a == b or b == c or a == c:
            print('TRIANGULO ISOSCELES')
    elif a ** 2 < b ** 2 + c ** 2:
        print('TRIANGULO ACUTANGULO')
        if a == b and a == c and b == c:
            print('TRIANGULO EQUILATERO')
        elif a == b or a == c or b == c:
            print('TRIANGULO ISOSCELES')

# 1045 - Triangle Types
# https://www.beecrowd.com.br/judge/en/problems/view/1045