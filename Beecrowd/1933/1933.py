# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1933
a, b = map(int, input().strip().split())

if a == b:
    c = a
elif a > b:
    c = a
elif a < b:
    c = b

print(c)

