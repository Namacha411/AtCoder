s = input()
k = int(input())

for i in range(min(len(s), k)):
    if int(s[i]) > 1:
        print(s[i])
        exit(0)

print(1)