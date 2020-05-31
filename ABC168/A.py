n = int(input())
n %= 10

hon = [2,4,5,7,9]
pon = [0,1,6,8]
for i in hon:
	if n == i:
		print("hon")
		exit()
for i in pon:
	if n == i:
		print("pon")
		exit()
print("bon")