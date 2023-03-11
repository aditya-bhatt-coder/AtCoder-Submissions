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

    int n; cin>>n;
    vector<int> a(n);
    for(int &x : a)
        cin>>x;
    
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(a[0]-a[1]);

    for(int i=2 ; i<n ; i++){
        dp[i] = min(dp[i-2] + abs(a[i-2]-a[i]),
                    dp[i-1] + abs(a[i-1]-a[i]));
    }

    cout<<dp[n-1];

    return 0;
}