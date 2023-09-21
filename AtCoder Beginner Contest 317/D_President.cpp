// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "Yes"
#define no cout << "No"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define inp(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

vvl v;
map<ll, map<ll, ll>> dp;

ll sol(ll w, int n){
    if(n == 0){
        if(w <= 0)
            return 0;
        else
            return INT_MAX;
    }

    if(dp[w][n])
        return dp[w][n];

    ll inc = v[n-1][0] + sol(w - v[n-1][1], n - 1);
    ll exc = sol(w, n - 1);

    return dp[w][n] = min(inc, exc);
}

void solve(){
    v.clear();
    dp.clear();

    int n;
    cin >> n;
    ll tot_seats = 0;

    for(int i=0 ; i<n ; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        tot_seats += c;
        if(a > b)
            v.pb({0ll, c});
        else{
            ll req = (b - a + 1) / 2;
            v.pb({req, c});
        }
    }

    cout << sol((tot_seats + 1)/2, n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}