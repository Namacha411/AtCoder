n, m = map(int, input().split())
ab = [list(map(int, input().split())) for _ in range(m)]

teikibin = [[[0] * n] for _ in range(n)]

for [a, b] in ab:
    a -= 1
    b -= 1
    teikibin[a][b] = 1
    teikibin[b][a] = 1

print(teikibin)