x, y = map(int, input().split())

for t in range(x+1):
    for c in range(x+1):
        if t+c == x and 2*t + 4*c == y:
            print("Yes")
            exit()
print("No")