def valid(a, b):
    x = int(a)
    y = int(b)

    if x<0 or x>23:
        return False
    if y<0 or y>59:
        return False
    
    return True

def f(hr):
    h = str(hr)
    if len(h) < 2:
        h = '0' + h
    return h


hr,mn = map(int,input().split())

h = f(hr)
m = f(mn)

while not valid(h[0] + m[0], h[1] + m[1]):
    m = f((int(m)+1) % 60)
    if int(m) == 0:
        h = f((int(h)+1) % 24)
    
print(int(h), int(m))