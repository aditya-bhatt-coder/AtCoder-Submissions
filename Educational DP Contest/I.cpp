//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    vector<double> p(n+1);
    for(int i=1 ; i<=n ; i++)
        cin>>p[i];

    vector<vector<double>> dp(n+1, vector<double> (n+1, 0.0));
    dp[0][0] = 1;
    for(int i=1 ; i<=n ; i++){
        for(int j=0 ; j<=i ; j++){
            if(j==0)
                dp[i][j] = dp[i-1][j] * (1-p[i]);
            if(i==j)
                dp[i][j] = dp[i-1][j-1] * p[i];
            else
                dp[i][j] = dp[i-1][j] * (1-p[i]) + dp[i-1][j-1] * p[i];
        }
    }

    double ans = 0;
    for(int i=(n/2)+1 ; i<=n ; i++)
        ans+=dp[n][i];

    cout<<fixed<<setprecision(10)<<ans;

    return 0;
}