s = input()
if(s[0]=='1'):
    print("No")
else:
    l = [[7],[4],[8,2],[5,1],[9,3],[6],[10]]
    ans = []

    #7
    if(s[7-1]=='0'):
        ans.append(0)
    else:
        ans.append(1)

    #4
    if(s[4-1]=='0'):
        ans.append(0)
    else:
        ans.append(1)

    #8,2
    if(s[8-1]=='0' and s[2-1]=='0'):
        ans.append(0)
    else:
        ans.append(1)

    #5,1
    if(s[5-1]=='0' and s[1-1]=='0'):
        ans.append(0)
    else:
        ans.append(1)

    #9,3
    if(s[9-1]=='0' and s[3-1]=='0'):
        ans.append(0)
    else:
        ans.append(1)

    #6
    if(s[6-1]=='0'):
        ans.append(0)
    else:
        ans.append(1)

    #10
    if(s[10-1]=='0'):
        ans.append(0)
    else:
        ans.append(1)

    def foo():
        for i in range(len(ans)):
            if(ans[i]==0):
                if 1 in ans[:i] and 1 in ans[i+1:]:
                    return 'Yes'
        return 'No'

    print(foo())