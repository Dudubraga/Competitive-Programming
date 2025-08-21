# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/2344
n = int(input())

if n == 0:
	grade = 'E'
elif n >= 1 and n <= 35:
	grade = 'D'
elif n >= 36 and n <= 60:
	grade = 'C'
elif n >= 61 and n <= 85:
	grade = 'B'
elif n >= 86 and n <= 100:
	grade = 'A'
	
print(grade)

