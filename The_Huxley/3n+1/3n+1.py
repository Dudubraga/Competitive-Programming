def cycle_length(n):
    length = 1
    while n != 1:
        if n % 2 == 0:
            n //= 2
        else:
            n = n * 3 + 1
        length += 1
    return length

while True:
    try:
        i, j = map(int, input().split())
        max_length = 0
        for n in range(min(i, j), max(i, j) + 1):
            max_length = max(max_length, cycle_length(n))
        print(i, j, max_length)
    except EOFError:
        break

