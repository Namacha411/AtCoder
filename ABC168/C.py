import math
a,b,h,m = map(int, input().split())

rad = abs(h*30 + m*0.5 - m*6) * math.pi / 180
res = math.sqrt(a**2 + b**2 - 2*a*b*math.cos(rad))

print(f"{res:.15f}")