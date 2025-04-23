contender, pages, recieved = map(int, input().strip().split())

if contender * recieved <= pages:
    print('S')
else:
    print('N')

