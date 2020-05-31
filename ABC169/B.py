n = int(input())
a = list(map(int, input().split()))

ans = 1
if 0 in a:
	print(0)
	exit(0)
for t in a:
	ans *= t
	if ans > 1e18:
		print(-1)
		exit(0)

print(ans)