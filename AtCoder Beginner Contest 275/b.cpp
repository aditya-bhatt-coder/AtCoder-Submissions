// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    a %= mod; b %= mod; c %= mod;
    d %= mod; e %= mod; f %= mod;

    a = (a * b) % mod;
    a = (a * c) % mod;

    // cout<<a<<'\n';

    d = (d * e) % mod;
    d = (d * f) % mod;

    // cout<<d<<'\n';

    a = (a - d + mod) % mod;

    cout<<a;

    return 0;
}