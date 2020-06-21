from math import factorial, comb
from bisect import bisect_left, bisect_right

n = int(input())
a = list(map(int, input().split()))

a.sort(reverse=True)
n = a[0]
r = 0
if abs(n/2-a[bisect_left(a, n/2)]) < abs(n/2-a[bisect_right(a,n/2)]):
    r = a[bisect_left(a, n/2)]
else:
    r = a[bisect_right(a,n/2)]
ans = comb(n, r)

print(ans)