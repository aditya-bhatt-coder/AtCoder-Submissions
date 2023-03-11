//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    
    //finding prefix sum
    vector<ll> pre(n+1);
    for(int i=0 ; i<n; i++)
    pre[i+1] = pre[i]+a[i];

    ll req = 0, s = 0;
    for(int i=1 ; i<=m ; i++){
        s += a[i-1];
        req += i*a[i-1];
    }

    ll ans = req;
    // cout<<req<<" "<<s<<" "<<'\n';

    for(int i=1 ; i<=n-m ; i++){
        req = req - s + (m*(a[i+m-1]));
        ans = max(req,ans);
        s -= a[i-1];
        s += a[i+m-1];
        // cout<<req<<" "<<s<<" "<<(m*(a[i+m-1]))<<'\n';
    }

    cout<<ans;

    return 0;
}