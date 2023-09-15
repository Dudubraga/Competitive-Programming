N = int(input())
leds = [6,2,5,5,4,5,6,3,7,6]
for i in range(N):
    num = input()
    ans = 0
    for j in range(len(num)):
        ans += leds[int(num[j])]
    print(f'{ans} leds')

# 1168 - LED
# https://www.beecrowd.com.br/judge/en/problems/view/1168 