n = int(input())
a = list(map(int, input().split()))

tmp = int(0)
for t in a:
    tmp ^= t

ans = [0] * n
for i in range(n):
    ans[i] = tmp ^ a[i]

print(*ans)