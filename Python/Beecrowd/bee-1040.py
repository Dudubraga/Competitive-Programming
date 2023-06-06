grade1, grade2, grade3, grade4 = map(float, input().split())

average = ((grade1 * 2) + (grade2 * 3) + (grade3 * 4) + (grade4 * 1)) / 10
print(f'Media: {average:.1f}')

if average >= 7:
    print(f'Aluno aprovado.')
elif average < 5:
    print(f'Aluno reprovado.')
elif average >= 5 and average < 7:
    print(f'Aluno em exame.')
    extra = float(input())
    final = (average + extra) / 2
    print(f'Nota do exame: {extra}')
    if extra >= 5:
        print(f'Aluno aprovado.')
    else:
        print(f'Aluno reprovado')
    print(f'Media final: {final:.1f}')

# 1040 - Average 3
# https://www.beecrowd.com.br/judge/en/problems/view/1040