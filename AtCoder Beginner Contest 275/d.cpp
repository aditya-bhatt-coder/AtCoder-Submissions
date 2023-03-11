// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

map<ll,ll> dp;

ll f(ll n){
    if(n == 0)
        return 1;
    if(dp.count(n))
        return dp[n];
    return dp[n] = f(n/2) + f(n/3);
}

int main()
{
    ll n; cin>>n;
    cout<<f(n);

    return 0;
}