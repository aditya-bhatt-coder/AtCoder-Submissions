n, h, x = map(int, input().split())
a = [int(x) for x in input().split()]

for i in range(n):
    if h + a[i] >= x:
        print(i + 1)
        break