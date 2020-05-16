from math import ceil, floor
from fractions import gcd

def lcm(a, b):
    return (a * b)/gcd(a, b)

a,b,c,d = map(int, input().split())

minusB = floor(b/c) + floor(b/d) - floor(b/lcm(c,d))
minusA = floor(a/c) + floor(a/d) - floor(a/lcm(c,d))
res = (b-a) - (minusB-minusA)

print(res)
exit(0)
