# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1985
product1 = "1001"
product2 = "1002"
product3 = "1003"
product4 = "1004"
product5 = "1005"
total = 0

purchased = int(input())
for i in range(purchased):
    product, quant = input().strip().split()
    quant = int(quant)
    if product == product1:
        total += 1.5 * quant
    if product == product2:
        total += 2.5 * quant
    if product == product3:
        total += 3.5 * quant
    if product == product4:
        total += 4.5 * quant
    if product == product5:
        total += 5.5 * quant

print(f'{total:.2f}')

