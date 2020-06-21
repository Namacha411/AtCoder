n = int(input())

ans = str()
while n != 0:
    n -= 1
    ans += chr(ord('a') + n % 26)
    n //= 26

print(ans[::-1])