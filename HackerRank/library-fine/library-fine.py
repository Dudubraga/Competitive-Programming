/* Problem statement: https://www.hackerrank.com/challenges/library-fine/problem */
d1, m1, y1 = map(int, input().strip().split())
d2, m2, y2 = map(int, input().strip().split())

if y1 > y2:
    fine = 10000
    total_fine = fine
elif y1 == y2:
    if m1 > m2:
        fine = 500
        diference = m1 - m2
        total_fine = fine * diference
    elif m1 < m2:
        fine = 0
        total_fine = fine
    elif m1 == m2:
        if d1 <= d2:
            fine = 0
            total_fine = fine
        elif d1 > d2:
            fine = 15
            diference = d1 - d2
            total_fine = fine * diference
elif y1 < y2:
    fine = 0
    total_fine = fine

print(f"{int(total_fine)}")

