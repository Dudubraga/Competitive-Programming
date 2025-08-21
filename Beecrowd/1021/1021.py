# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1021
money = float(input())
money *= 100

notes = [10000, 5000, 2000, 1000, 500, 200]
coins = [100, 50, 25, 10, 5, 1]

print('NOTAS:')
for note in notes:
    print(f'{int(money//note)} nota(s) de R$ {(note/100):.2f}')
    money %= note

print('MOEDAS:')
for coin in coins:
    print(f'{int(money//coin)} moeda(s) de R$ {(coin/100):.2f}')
    money %= coin

