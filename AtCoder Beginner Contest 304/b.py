n = int(input())

if n <= 1000 - 1:
    print(n)

elif n <= 10000 - 1:
    n = n // 10
    n = n * 10
    print(n)

elif n <= 100000 - 1:
    n = n // 100
    n = n * 100
    print(n)

elif n <= 1000000 - 1:
    n = n // 1000
    n = n * 1000
    print(n)

elif n <= 10000000 - 1:
    n = n // 10000
    n = n * 10000
    print(n)

elif n <= 100000000 - 1:
    n = n // 100000
    n = n * 100000
    print(n)

elif n <= 1000000000 - 1:
    n = n // 1000000
    n = n * 1000000
    print(n)