# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1150
x = int(input())
while True:
    z = int(input())
    if z > x:
        break
sum = 0
count = 0
for i in range(x, z+1):
    if sum > z:
        break
    sum += i
    count +=1
print(count)

