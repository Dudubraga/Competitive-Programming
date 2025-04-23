import math
base, area = map(float, input().split(" "))

h = (area * 2) / base
result = math.ceil(h)

print(result)

