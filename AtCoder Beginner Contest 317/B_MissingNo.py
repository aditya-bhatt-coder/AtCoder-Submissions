n = int(input())
a = [int(x) for x in input().split()]
a.sort()

for i in range(1, n):
    if a[i] != a[i - 1] + 1:
        print(a[i - 1] + 1)
        break

