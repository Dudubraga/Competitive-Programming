p1, c1, p2, c2 = map(int, input().strip().split())

if c1 * p1 == c2 * p2:
    print('0')
elif c1 * p1 >= c2 * p2:
    print('-1')
elif c1 * p1 <= c2 * p2:
    print('1')

