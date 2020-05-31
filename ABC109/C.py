import fractions

N, X = map(int, input().split())
x = list(map(int, input().split()))

ans = abs(X-x[0])
for pos in x:
    ans = fractions.gcd(ans, abs(X-pos))

print(ans)