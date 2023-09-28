N = int(input())
C = int(input())
elected = True
for i in range(N-1):
    v = int(input())
    if v > C:
        elected = False
if elected == True:
    print("S")
else:
    print("N")

# 2963 - Buffoon
# https://www.beecrowd.com.br/judge/en/problems/view/2963