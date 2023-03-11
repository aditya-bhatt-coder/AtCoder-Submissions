//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int r,c;
    cin>>r>>c;

    vector<vector<char>> g(r, vector<char> (c));
    vector<vector<ll>> dp(r, vector<ll> (c,0));

    //input
    for(int i=0 ; i<r ; i++){
        string s; cin>>s;
        for(int j=0 ; j<c ; j++)
            g[i][j] = s[j];
    }

    //initialization
    for(int i=0 ; i<c ; i++){
        if(g[0][i]=='#')
            break;
        else
            dp[0][i] = 1;
    }
    for(int i=0 ; i<r ; i++){
        if(g[i][0]=='#')
            break;
        else
            dp[i][0] = 1;
    }

    for(int i=1 ; i<r ; i++)
        for(int j=1 ; j<c ; j++){
            if(g[i][j]=='#')
                continue;
            dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
        }

    cout<<dp[r-1][c-1]%mod;

    return 0;
}