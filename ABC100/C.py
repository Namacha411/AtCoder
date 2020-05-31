n = int(input())
a = list(map(int, input().split()))

ans = 0
for t in a:
    while t % 2 == 0:
        ans += 1
        t /= 2

print(ans)