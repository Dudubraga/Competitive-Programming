a, b = map(int, input().strip().split())

if a == b:
    c = a
elif a > b:
    c = a
elif a < b:
    c = b

print(c)

