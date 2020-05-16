n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

ans = 0
for i in range(len(b)):
    kill = min(a[i], b[i])
    ans += kill
    kill = min(a[i+1],b[i]-kill)
    ans += kill
    a[i] -= min(a[i],b[i])

print(ans)
