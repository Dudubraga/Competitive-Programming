a, b, c = map(float, input().split())

delta = (b ** 2) - (4 * a * c)

if a == 0 or delta < 0:
    print('Impossivel calcular')
else:
    x = (- b + (delta ** 0.5)) / (2 * a)
    y = (- b - (delta ** 0.5)) / (2 * a)
    print(f"R1 = {x:.5f}\nR2 = {y:.5f}")

