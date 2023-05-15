tests = int(input())
for i in range(tests):
    a, b, x = map(int, input().split())
    ab = a ** b
    abx0 = ab // x
    abx1 = x * abx0
    abx2 = x * (abx0 + 1)

    if (ab - abx1) < (abx2 - ab):
        print(int(abx1))
    else:
        print(int(abx2))

# Closest Number
# https://www.hackerrank.com/challenges/closest-number/problem