# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1068
while True:
    try:
        exp = input()
        possible = True
        stack = []
        for i in exp:
            if i == '(':
                stack.append('(')
            elif i == ')':
                if stack.count('(') == 0:
                    possible = False
                else:
                    stack.pop()
        
        if possible == True and stack.count('(') == 0:
            print("correct")
        else:
            print("incorrect")
    except EOFError:
        break;

