a, b, c = map(int, input().strip().split())

MaiorAB = (a + b + abs(a - b)) / 2
MaiorABC = (MaiorAB + c + abs(MaiorAB - c)) / 2 

print(f'{int(MaiorABC)} eh o maior')

# 1013 - The Greatest
# https://www.beecrowd.com.br/judge/en/problems/view/1013