# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1197
while True:
    try:
        v, t = map(int, input().split())
        print(v * 2 * t)

    except EOFError:
        break

