/* Problem statement: https://codeforces.com/problemset/problem/519/C */
xp, nb = map(int, input().split())
groups = 0

while xp + nb >= 3 and nb > 0 and xp > 0:
    if xp > nb:
        xp -= 2
        nb -= 1
        groups += 1
    else:
        xp -= 1
        nb -= 2
        groups += 1

print(groups)

