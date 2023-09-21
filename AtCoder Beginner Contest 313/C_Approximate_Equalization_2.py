import math

n = int(input())
a = [int(x) for x in input().split()]

avg = (sum(a)/len(a))
l = math.floor(avg)
h = math.ceil(avg)

# print(l, h)

add, sub = 0, 0

for i in a:
    ldiff = abs(l - i)
    hdiff = abs(h - i)

    if ldiff < hdiff:
        add += ldiff
    elif ldiff > hdiff:
        sub += hdiff

print(max(add, sub))