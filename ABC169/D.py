from math import floor, sqrt
def prime(n):
    p = dict()
    i = 2
    while i*i <= n:
        while n % i == 0:
            n /= i
            if i in p:
                p[i] += 1
            else:
                p[i] = 1
        i += 1
    if n > 1:
        p[int(n)] = 1
    return p

n = int(input())

ans = 0
for a in prime(n).values():
    ans += floor(sqrt(8*a+1) - 1)//2

print(ans)