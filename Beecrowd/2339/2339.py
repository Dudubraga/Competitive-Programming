# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/2339
contender, pages, recieved = map(int, input().strip().split())

if contender * recieved <= pages:
    print('S')
else:
    print('N')

