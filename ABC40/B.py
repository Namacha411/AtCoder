n = int(input())

ans = 100000
for i in range(1, n+1):
    res = abs(n//i - i) + n % ((n//i) * i)
    ans = min(ans, res)

print(ans)