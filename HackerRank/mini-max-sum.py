n1, n2, n3, n4, n5 = map(int, input().split())

arr = [n1, n2, n3, n4, n5]
maximum = max(arr)
minimum = min(arr)
min_sum = sum(arr, -maximum)
max_sum = sum(arr, -minimum)

print(f"{min_sum} {max_sum}")

# Mini-Max Sum
# https://www.hackerrank.com/challenges/mini-max-sum/problem