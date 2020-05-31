import math

n, k = map(int, input().split())
a = list(map(int, input().split()))


ans = math.ceil(n/k)

print(ans)