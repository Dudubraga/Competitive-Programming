n = int(input())

if n == 1:
        top = 1
elif n > 1 and n <= 3:
        top = 3
elif n > 3 and n <= 5:
        top = 5
elif n > 5 and n <= 10:
        top = 10
elif n > 10 and n <= 25:
        top = 25
elif n > 25 and n <= 50:
        top = 50
elif n > 50 and n <= 100:
        top = 100

print(f'Top {top}')


# 1943 - Top N
# https://www.beecrowd.com.br/judge/en/problems/view/1943