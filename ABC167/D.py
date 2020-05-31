n, k = map(int, input().split())
a = list(map(int, input().split()))

visit = []
step = [-1] * (n + 1)
v = 1
while step[v] == -1:
    step[v] = len(visit)
    visit.append(v)
    v = a[v - 1]
cycle = len(visit) - step[v]
nonCycle = step[v]

if k < nonCycle:
    print(visit[k])
else:
    k -= nonCycle
    k %= cycle
    print(visit[nonCycle + k])