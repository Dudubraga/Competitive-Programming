x = float(input())

if x <= 100 and x > 75:
    print(f'Intervalo (75,100]')
if x <= 75 and x > 50:
    print(f'Intervalo (50,75]')
if x <= 50 and x > 25:
    print(f'Intervalo (25,50]')
if x <= 25 and x >= 0:
    print(f'Intervalo [0,25]')
    
if x > 100:
    print(f'Fora de intervalo')
if x < 0:
    print(f'Fora de intervalo')


# Interval
# https://www.beecrowd.com.br/judge/en/problems/view/1037