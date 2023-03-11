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

    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int &i : a) cin>>i;

    if(n<=k)
        cout<<abs(a[0]-a[n-1]);
    
    else{
        //..init
        vector<int> dp(n,INT_MAX);
        for(int i=0 ; i<k and i<n ; i++)
            dp[i] = abs(a[0]-a[i]);

        for(int i=k ; i<n ; i++){
            for(int j=1 ; j<=k ; j++){
                dp[i] = min(dp[i-j]+abs(a[i-j]-a[i]),dp[i]);
            }
        }

        cout<<dp[n-1];
    }


    return 0;
}