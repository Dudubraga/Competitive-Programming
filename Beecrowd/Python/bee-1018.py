money = int(input())
n100 = int(money / 100)
x = money % 100
n50 = int(x / 50)
x = x % 50
n20 = int(x / 20)
x = x % 20
n10 = int(x / 10)
x = x % 10
n5 = int(x / 5)
x = x % 5
n2 = int(x / 2)
x = x % 2
n1 = int(x / 1)

print(money)
print(n100, 'nota(s) de R$ 100,00')
print(n50, 'nota(s) de R$ 50,00')
print(n20, 'nota(s) de R$ 20,00')
print(n10, 'nota(s) de R$ 10,00')
print(n5, 'nota(s) de R$ 5,00')
print(n2, 'nota(s) de R$ 2,00')
print(n1, 'nota(s) de R$ 1,00')

# 1018 - Banknotes
# https://www.beecrowd.com.br/judge/en/problems/view/1018