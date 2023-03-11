// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
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

    ll a, b;
    cin >> a >> b;

    auto f = [&](ll x){
        return (x-1) * b + a / sqrt(1.L * x);
    };

    ll l = 1, r = a / b + 2;

    while(l < r){
        ll mid = (l + r) / 2;
        if(f(mid) < f(mid + 1)){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }

    cout<<fixed<<setprecision(10)<<f(l);

    return 0;
}