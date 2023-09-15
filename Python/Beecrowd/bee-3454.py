game = input()
O = 0
for i in range(0, 3):
    if game[i] == 'O':
        O += 1

if O != 1:
    print('?')
elif game[1] == 'O':
    print('*')
else:
    print('Alice')

# 3454 - Alice in Noughts and Crosses Wonderland
# https://www.beecrowd.com.br/judge/en/problems/view/3454
