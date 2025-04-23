start, finish = map(int, input().split())

if start == finish:
    duration = 24
elif start < finish:
    duration = finish - start
elif start > finish:
    duration = 24 - (start - finish)

print(f'O JOGO DUROU {duration} HORA(S)')

