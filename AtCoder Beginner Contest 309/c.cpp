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

void solve(){
    ll n, k;
    cin >> n >> k;
    vvl a(n, vl(2));

    for(int i=0 ; i<n ; i++){
        cin >> a[i][0] >> a[i][1];
    }

    auto f = [&](ll mid){
        ll val = 0;
        for(auto it : a){
            if(it[0] >= mid){
                // cout << it[0] << " " << mid << "\n";
                val += it[1];
            }
        }
        return val <= k;
    };

    ll l = 1, r = 1e10, ans = 1e10;
    while(l <= r){
        ll mid = (l + r)>>1;
        if(f(mid)){
            r = mid - 1;
            ans = min(ans, mid);
        } else{
            l = mid + 1;
        }
        // cout << mid << " " << f(mid) << "\n";
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}