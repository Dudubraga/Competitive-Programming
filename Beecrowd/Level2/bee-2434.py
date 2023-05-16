days, money = map(int, input().split())
lower_q = money
for i in range(days):
    change = int(input())
    final = money + change
    money = final
    if final <= lower_q:
        lower_q = final

print(f'{lower_q}')

# 2434 - Saldo do Vovô
# https://www.beecrowd.com.br/judge/en/problems/view/2434