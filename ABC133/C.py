l, r = map(int, input().split())

mod = 2019
ans = mod
for i in range(l, r):
    for j in range(i+1, r+1):
        res = (i*j) % mod
        ans = min(ans, res)
        if res == 0:
            print(ans)
            exit()

print(ans)