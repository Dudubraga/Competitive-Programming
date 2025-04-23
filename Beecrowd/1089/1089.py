while True:
    N = int(input())
    if N == 0:
        break
    wave = list(map(int, input().split()))
    wave.append(wave[0])

    peaks = 0
    for i in range(0, N):
        if wave[i] > wave[i-1] and wave[i] > wave[i+1]:
            peaks += 1
        if wave[i] < wave[i-1] and wave[i] < wave[i+1]:
            peaks += 1

    if wave[0] > wave[N-1] and wave[0] > wave[1]:
        peaks += 1
    if wave[0] < wave[N-1] and wave[0] < wave[1]:
        peaks += 1

    print(peaks)

