# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1101
while True:
    m, n = map(int, input().split())
    if m <= 0 or n <= 0:
        break
    smallest = min(m, n)
    biggest = max(m, n)
    total = 0

    for i in range(smallest, biggest+1):
        total += i
        print(i, end=' ')
    print(f'Sum={total}')

