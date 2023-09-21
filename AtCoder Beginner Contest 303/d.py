X, Y, Z = map(int, input().split())
S = input()

time = 0
caps_lock = False

for c in S:
    if c == 'a':
        if not caps_lock:
            time += X
        else:
            time += Y
    elif c == 'A':
        if not caps_lock:
            time += Y
        else:
            time += X
    caps_lock = not caps_lock
    time += Z

print(time)