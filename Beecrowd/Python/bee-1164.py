tests = int(input())
i = 0
while i < tests:
    n = int(input())
    divisors = 0
    j = 1
    while j < n:
        if n % j == 0:
            divisors = divisors + j
        j+=1
    if divisors == n:
        print(f'{n} eh perfeito')
    else:
        print(f'{n} nao eh perfeito')
    i+=1

# 1164 - Perfect Number
# https://www.beecrowd.com.br/judge/en/problems/view/1164