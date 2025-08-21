# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1183
Op = input()
sum = 0
num = 0
for i in range(0,12):
    for j in range(0,12):
        N = float(input())
        if i < j:
            sum += N
            num += 1
if Op == 'S':
    print(sum)
else:
    avg = sum / float(num)
    print("%.1f" % avg)

