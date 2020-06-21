n = int(input())
a = list(map(int, input().split()))

MAX = 1000005
cnt = [0] * MAX
for x in a:
    if cnt[x] != 0:
        cnt[x] = 2
        continue
    for i in range(x, MAX, x):
        cnt[i] += 1
ans = 0
for x in a:
    if cnt[x] == 1:
        ans += 1

print(ans)