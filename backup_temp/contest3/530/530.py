F = [0 for x in range(100000)]
F[0] = 1; F[1] = 1; F[2] = 2; F[3] = 6

def fat(x):
    if F[x] != 0:
        return F[x]
    F[x] = x * fat(x-1)
    return F[x]
    
while(1):
    n, k =  map(int, input().strip().split())
    if(n == 0 and k == 0):
        break
    else:
        r = fat(n) / (fat(k) * fat(n-k))
        print(int(r))