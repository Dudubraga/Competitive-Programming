intervals = int(input())
x = intervals
result = 0

for i in range(intervals):
    while x <= intervals and x > 0:
        time, velocity = map(int, input().split())
        result += time * velocity
        x -= 1

print(result)

