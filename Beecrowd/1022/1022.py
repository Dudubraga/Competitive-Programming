tests = int(input())
for t in range(tests):
    num1, _, den1, op, num2, _, den2 = input().strip().split()
    num1 = int(num1)
    den1 = int(den1)
    num2 = int(num2)
    den2 = int(den2)

    if op == '+':
        den = (den1 * den2)
        num = (num1 * den2) + (num2 * den1)
    elif op == '-':
        den = (den1 * den2)
        num = (num1 * den2) - (num2 * den1)
    elif op == '*':
        den = (den1 * den2)
        num = (num1 * num2)
    elif op == '/':
        den = (den1 * num2)
        num = (num1 * den2)

    a = num
    b = den
    while b != 0:
        a, b = b, a % b
    gcd = a

    simp_num = num // gcd
    simp_den = den // gcd

    print(f'{num}/{den} = {simp_num}/{simp_den}')

