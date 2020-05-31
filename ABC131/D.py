n = int(input())
ab = [list(map(int, input().split())) for _ in range(n)]

ab.sort(key=lambda ab: ab[1], reverse=True)
time = ab[0][1]
for [a, b] in ab:
    time = min(time, b)
    time -= a
    if time < 0:
        print("No")
        exit(0)

print("Yes")