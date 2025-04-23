a, b = map(int, input().split())

heigherAB = (a + b + abs(a - b)) / 2
lowerAB = (a + b - abs(a - b)) / 2
m = heigherAB % lowerAB

if m == 0:
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')

