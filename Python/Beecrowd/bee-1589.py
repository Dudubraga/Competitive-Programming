tests = int(input())
x = tests

for i in range(tests):
    while x > 0:
        r1, r2 = map(int, input().strip().split())
        r3 = r1 + r2
        print(r3)
        x -= 1

# 1589 - Bob Conduit
# https://www.beecrowd.com.br/judge/en/problems/view/1589