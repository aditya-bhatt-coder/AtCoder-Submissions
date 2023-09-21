n = int(input())
a = input()
ok = True

for i in range(len(a) - 1):
    if a[i] == a[i + 1]:
        ok = False

print("Yes") if ok else print("No")