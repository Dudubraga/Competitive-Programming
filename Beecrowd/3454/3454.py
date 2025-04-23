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

