mod = 998244353
n = int(input())
A, B = [0]*n, [0]*n
dp = [[0,0] for i in range(n)]
dp[0] = [1,1]

for i in range(n):
    A[i], B[i] = map(int, input().split())

for i in range(1,n):
    if A[i] != A[i-1]:
        dp[i][0] += dp[i-1][0] % mod
    if A[i] != B[i-1]:
        dp[i][0] += dp[i-1][1] % mod
    if B[i] != A[i-1]:
        dp[i][1] += dp[i-1][0] % mod
    if B[i] != B[i-1]:
        dp[i][1] += dp[i-1][1] % mod

print((dp[n-1][0] + dp[n-1][1]) % mod)