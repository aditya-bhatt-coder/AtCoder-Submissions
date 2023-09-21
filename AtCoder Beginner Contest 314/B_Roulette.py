n = int(input())

l, val = [], []

for i in range(n):
    garbage = input()
    l.append([int(x) for x in input().split()])

x = int(input())

for i in range(len(l)):
    if x in l[i]:
        val.append([len(l[i]), i + 1])

if len(val) == 0:
    print(len(val))
    print(*val)

else:
    mn = min([i[0] for i in val])
    ans = [i[1] for i in val if i[0] == mn]
    ans.sort()
    print(len(ans))
    print(*ans)