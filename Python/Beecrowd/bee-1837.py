A, B = map(int, input().split())
Q = A // B
R = A % B
if R < 0 and B > 0:
    Q -= 1
    R += B
elif R < 0 and B < 0:
    Q += 1
    R = A - B * Q
print(f'{Q} {R}')

# 1837 - Preface
# https://www.beecrowd.com.br/judge/en/problems/view/1837