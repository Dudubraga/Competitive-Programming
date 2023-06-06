a, b, c = map(int, input().split())
if a == b or a == c or b == c:
    print('S')
elif a + b == c or a + c == b or b + c == a:
    print('S')
else:
    print('N')

# 2235 - Walking in Time
# https://www.beecrowd.com.br/judge/en/problems/view/2235