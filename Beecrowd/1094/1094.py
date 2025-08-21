# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1094
tests = int(input())
total = 0; 
rabbit = 0; rat = 0; frog = 0
for i in range(tests):
    amount, animal = input().split()
    amount = int(amount)
    total += amount
    if animal == 'C':
        rabbit += amount
    elif animal == 'R':
        rat += amount
    elif animal == 'S':
        frog += amount

rabbit_percentage = (rabbit / total) * 100
rat_percentage = (rat / total) * 100
frog_percentage = (frog / total) * 100

print(f'Total: {total} cobaias')
print(f'Total de coelhos: {rabbit}')
print(f'Total de ratos: {rat}')
print(f'Total de sapos: {frog}')
print(f'Percentual de coelhos: {rabbit_percentage:.2f} %')
print(f'Percentual de ratos: {rat_percentage:.2f} %')
print(f'Percentual de sapos: {frog_percentage:.2f} %')

