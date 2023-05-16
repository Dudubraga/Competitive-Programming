while True:
    p = int(input())
    if p == 0:
        break
    pags = p / 4
    paginas = []
    for i in range(p):
        paginas.append(i+1)
    if (p + 1) % 4 == 0:
        pags += 0.25
        paginas.append("Blank")
    elif (p + 2) % 4 == 0:
        pags += 0.5
        for j in range(2):
            paginas.append("Blank")
    elif (p + 3) % 4 == 0:
        pags += 0.75
        for j in range(3):
            paginas.append("Blank")

    print(f'Printing order for {p} pages:')
    if p == 1:
        print(f'Sheet 1, front: {paginas[-1]}, {paginas[0]}')
    else:
        for k in range(int(pags)):
            print(f'Sheet {k+1}, front: {paginas[-1]}, {paginas[0]}')
            print(f'Sheet {k+1}, back : {paginas[1]}, {paginas[-2]}')
            paginas.pop(0)
            paginas.pop(0)
            paginas.pop(-1)
            paginas.pop(-1)

# 637 - Booklet Printing
# https://onlinejudge.org/external/6/637.pdf