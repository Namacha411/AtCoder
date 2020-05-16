w,h,x,y = map(float, input().split())

s = w * h / 2
res = 1 if 2*x==w and 2*y==h else 0

print("{} {}".format(s, res))