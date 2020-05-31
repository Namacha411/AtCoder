n, m = map(int, input().split())
ls = [list(map(int, input().split())) for _ in range(n)]

ls.sort()
ans = 0
numOfDrink = 0
for (a, b) in ls:
    if numOfDrink + b <= m:
        ans += a * b
        numOfDrink += b
    else:
        ans += a * (m-numOfDrink)
        break

print(ans)