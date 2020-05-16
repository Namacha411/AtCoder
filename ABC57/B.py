n, m = map(int, input().split())
ab = [list(map(int, input().split())) for _ in range(n)]
cd = [list(map(int, input().split())) for _ in range(m)]

for a, b in ab:
    dis = 4 * 10**8
    for i in range(m):
        (c, d) = cd[i]
        tmp = abs(a-c)+abs(b-d)
        if dis > tmp:
            ans = i
            dis = tmp
    print(ans+1)