highest = 0
position = 0
for i in range(100):
    n = int(input())
    if n > highest:
        highest = n
        position = i
        
print(f'{highest}\n{position+1}')

# 1080 - Highest and Position
# https://www.beecrowd.com.br/judge/en/problems/view/1080