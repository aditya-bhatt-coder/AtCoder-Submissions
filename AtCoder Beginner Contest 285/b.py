n = int(input())
s = input()

for i in range(1,len(s)):
    ctr = 0
    for j in range(len(s)):
        if j+i >= n:
            break
        if s[j] == s[j+i]:
            break
        ctr+=1
    print(ctr)