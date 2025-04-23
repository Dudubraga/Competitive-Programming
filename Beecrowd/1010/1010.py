code1, number1, price1 = map(float, input().strip().split())
code2, number2, price2 = map(float, input().strip().split())

pagar = (number1 * price1) + (number2 * price2)

print(f'VALOR A PAGAR: R$ {pagar:.2f}')

