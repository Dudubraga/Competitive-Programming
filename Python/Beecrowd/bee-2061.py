pages, actions = map(int, input().split())
x = 1

while x <= actions:
    command = input()
    if command == 'fechou':
        pages = pages - 1 + 2
    elif command == 'clicou':
        pages = pages - 1
    x+=1
print(pages)

# 2061 - Closing Tabs
# https://www.beecrowd.com.br/judge/en/problems/view/2061