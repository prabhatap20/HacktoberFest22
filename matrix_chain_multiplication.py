import sys
def mcmi(p,n):
    dp=[[0 for j in range(n+1)]for i in range(n+1)]
    min_value=sys.maxsize
    for i in range(1, n+1):
        dp[i][i] = 0
    for L in range(2, n+1):
        for i in range(1, n+1-L + 1):
            j = i + L-1
            dp[i][j] = sys.maxsize
            for k in range(i, j):
                q = dp[i][k] + dp[k + 1][j] + p[i-1]*p[k]*p[j]
                if q < dp[i][j]:
                    dp[i][j] = q
 
    #print(dp)
    return dp[1][n]
n=int(input())
p=[int(i) for i in input().split()]
dp=[[-1 for j in range(n+1)]for i in range(n+1)]
ans=mcmi(p,n)
print(ans)
