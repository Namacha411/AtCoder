s = input()

n = 2019
i = 1
ans = 0
while len(s) > len(str(n*i)):
    ans += s.count(str(n*i))
    i += 1

print(ans)

