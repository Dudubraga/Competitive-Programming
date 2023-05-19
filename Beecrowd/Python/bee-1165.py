tests = int(input())
i = 0
while i < tests:
    n = int(input())
    divisors = 0
    j = 1
    while j <= n:
        if n % j == 0:
            divisors +=1
        j+=1
    if divisors == 2:
        print(f'{n} eh primo')
    else:
        print(f'{n} nao eh primo')
    i+=1

# 1165 - Prime Number
# https://www.beecrowd.com.br/judge/en/problems/view/1165