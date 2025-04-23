x, y = map(int, input().split())
if x == 1:
    total = 4.00 * y
elif x == 2:
    total = 4.50 * y
elif x == 3:
    total = 5.00 * y
elif x == 4:
    total = 2.00 * y
elif x == 5:
    total = 1.50 * y

print(f'Total: R$ {total:.2f}')

