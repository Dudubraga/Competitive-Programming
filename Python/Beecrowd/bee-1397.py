while True:
    rounds = int(input())
    if rounds == 0:
        break
    a_points = 0
    b_points = 0
    for i in range(rounds):
        a, b = map(int, input().split())
        if a > b:
            a_points+=1
        if a < b:
            b_points+=1
    print(a_points, b_points)


# 1397 - Game of The Gratest
# https://www.beecrowd.com.br/judge/en/problems/view/1397