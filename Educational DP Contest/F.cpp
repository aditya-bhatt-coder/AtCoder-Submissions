//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, t;
    cin>>s>>t;
    int m = s.size();
    int n = t.size();

    vector<vector<int>> dp(m+1, vector<int>(n+1,0));

    for(int i=1 ; i<=m ; i++){
        for(int j=1 ; j<=n ; j++){
            if(s[i-1]==t[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    // cout<<dp[m][n];

    string ans = "";
    int i = m, j = n;

    while(i>0 and j>0){
        if(s[i-1]==t[j-1]){
            ans = s[i-1] + ans;
            i--;j--;
        }else{
            if(dp[i-1][j]>dp[i][j-1])
                i--;
            else
                j--;
        }
    }

    cout<<ans;

    return 0;
}