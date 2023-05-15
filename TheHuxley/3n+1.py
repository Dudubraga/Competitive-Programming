while True:
    try:
        i, j = map(int, input().split())
        max_size = 0
        for n in range(min(i, j), max(i, j) + 1):
            count = 1
            while n != 1:
                if n % 2 == 0:
                    n //= 2
                else:
                    n = n * 3 + 1
                count += 1
            size = count
            max_size = max(size, max_size)
        print(i, j, max_size)
    except EOFError:
        break
