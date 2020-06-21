n = int(input())
a = list(map(int, input().split()))
q = int(input())
bc = [map(int, input().split()) for _ in range(q)]

numlist = [0] * int(1e5 + 5)
for t in a:
    numlist[t] += 1
ans = sum(a)

for b, c in bc:
    ans += numlist[b] * (c-b)
    print(ans)
    numlist[c] += numlist[b]
    numlist[b] = 0

