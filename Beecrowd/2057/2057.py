# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/2057
S, T, F = map(int, input().split())
ans = S + T + F
if ans >= 24:
    ans -= 24
if ans < 0:
    ans += 24
print(ans)

