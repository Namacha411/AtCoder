x, n = map(int, input().split())
p = list(map(int, input().split()))

MAX = 102
tbl = [False] * MAX
for t in p:
    tbl[t] = True
MIN = MAX
ans = 0
for i in range(MAX):
    if tbl[i]:
        continue
    if MIN > abs(x-i):
        ans = i
        MIN = abs(x-i)

print(ans)