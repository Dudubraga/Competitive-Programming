tests = int(input())

for i in range(1, tests + 1):
    n, k = map(int, input().strip().split())

    survivor = 0
    for j in range(1, n + 1):
        survivor = (survivor + k) % j

    print(f"Case {i}: {survivor + 1}")

# 1030 - Flavious Josephus Legend
# https://www.beecrowd.com.br/judge/en/problems/view/1030