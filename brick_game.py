t = int(input())
for i in range(1, t+1):
    a = list(map(int, input().split()))
    a.sort()
    n = a[0]
    a.remove(n)
    n1 = int(n/2)
    x = a[n1]
    print(f'Case {i}: {x}')
