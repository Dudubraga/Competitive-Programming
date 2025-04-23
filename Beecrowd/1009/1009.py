name = input()
fixed = float(input())
sales = float(input())
commission = sales * 15/100
salary = fixed + commission

print(f"TOTAL = R$ {salary:.2f}")
