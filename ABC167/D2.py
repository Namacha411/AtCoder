n,k = map(int, input().split())
to = [[0] * n for i in range(60)]
to[0] = list(map(int, input().split()))

# ダブリング
for i in range(n):
    to[0][i] -= 1
DOUBLING = 60
for i in range(DOUBLING-1):
    for j in range(n):
        to[i+1][j] = to[i][to[i][j]]
v = 0
for d in range(DOUBLING, -1, -1):
    l = (1 << d)
    if l <= k:
        v = to[d][v]
        k -= l

print(v + 1)