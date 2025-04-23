t = int(input())

for i in range(t):    
    exp = input()
    diamonds = 0
    stack = [] 
    for j in (exp):
        if j != '.':
            if j == '<':
                stack.append('<')
            elif stack.count('<') != 0:
                stack.pop()
                diamonds += 1
    print(diamonds)

