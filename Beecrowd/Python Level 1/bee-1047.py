hour1, minute1, hour2, minute2 = map(int, input().strip().split())

start = (hour1 * 60) + minute1
finish = (hour2 * 60) + minute2
time = finish - start

if time > 0:
    h = time // 60
    m = time % 60
    print(f'O JOGO DUROU {h} HORA(S) E {m} MINUTO(S)')
elif time <= 0:
    time = 24 * 60 + time
    h = time // 60
    m = time % 60
    print(f'O JOGO DUROU {h} HORA(S) E {m} MINUTO(S)')

# 1047 - Game Time with Minutes
# https://www.beecrowd.com.br/judge/en/problems/view/1047