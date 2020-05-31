n = int(input())
a = list(map(int, input().split()))

data = [[a[i], i+1] for i in range(n)]
data.sort(reverse=True)

for [h, n] in data:
    print(n)