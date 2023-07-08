limak, bob = map(int, input().split())
years = 0
while limak <= bob:
    limak *= 3
    bob *= 2
    years += 1

print(years)

# 791A - Bear and Big Brother
# https://codeforces.com/problemset/problem/791/A