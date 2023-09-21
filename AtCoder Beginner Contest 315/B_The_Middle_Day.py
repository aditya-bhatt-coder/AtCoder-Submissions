n = int(input())
a = [int(x) for x in input().split()]

tot = sum(a)
mid = tot // 2 + 1
val = 0

mon = 0
for i in range(n):
    if(val >= mid):
        mon = i - 1
        val -= a[mon]
        break
    val += a[i]

if n == 1:
    print(1, mid)
else:
    print(mon + 1, max(1, mid - val))