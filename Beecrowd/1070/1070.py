n = int(input())
i = 0
if n % 2 == 0:
    while i < 6:
        print(n + 1)
        i+=1
        n+=2
else:
    while i < 6:
        print(n)
        i+=1
        n+=2

