age = int(input())

years = int(age / 365)
months = int((age - years * 365) / 30)
days = int(age - (years * 365) - (months * 30))

print(f'{years} ano(s)')
print(f'{months} mes(es)')
print(f'{days} dia(s)')

# 1020 - Age in Days
# https://www.beecrowd.com.br/judge/en/problems/view/1020