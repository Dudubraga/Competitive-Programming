# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/2867
import math
T = int(input())
for i in range(T):
    N, M = map(int, input().split())
    R = math.log10(pow(N, M)) + 1
    print(int(R))
   
