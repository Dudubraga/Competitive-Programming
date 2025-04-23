while True:
    increase, monster = map(int, input().strip().split())
    if increase == 0 and monster == 0:
        break
    else:
        exp = increase * monster
        print(exp)

