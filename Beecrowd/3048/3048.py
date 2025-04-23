n = int(input())
quant = 0
seq2 = 0
for i in range(n):
    seq1 = int(input())
    if seq1 != seq2:
        quant += 1
    seq2 = seq1
print(f'{quant}')

