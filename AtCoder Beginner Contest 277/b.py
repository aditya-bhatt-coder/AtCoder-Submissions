s = set()
n = int(input())
ok = True
for _ in range(n):
    t = input()
    s.add(t)
    if t[0] not in ('H','D','C','S'):
        ok = False
    if t[1] not in ('A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'):
        ok = False

if(n == len(s) and ok):
    print("Yes")
else:
    print("No")