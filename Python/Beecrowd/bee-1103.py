while True:
    h1, m1, h2, m2 = map(int, input().split())
    if h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0:
        break
    if h1 == 0:
        h1 = 24
    if h2 == 0:
        h2 = 24
    m1 += h1 * 60
    m2 += h2 * 60
    if m2 < m1:
        print(24*60 - (m1-m2))
    else:
        print(m2 - m1)

# 1103 - Alarm Clock
# https://www.beecrowd.com.br/judge/en/problems/view/1103