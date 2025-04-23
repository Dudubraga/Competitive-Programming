a, b, c = map(float, input().split())
arr = [a, b, c]
arr.sort()

if arr[2] > abs(arr[1] - arr[0]) and arr[2] < arr[1] + arr[0]:
    triangulo = a + b + c
    print(f'Perimetro = {triangulo:.1f}')
else:
    trapezio = ((a + b) * c) / 2
    print(f'Area = {trapezio:.1f}')

