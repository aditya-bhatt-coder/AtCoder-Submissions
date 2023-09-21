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
    int n, m;
    cin >> n >> m;

    vl a(n), b(m);
    inp(a); inp(b);

    auto f = [&](ll mid)->bool{
        int x=0, y=0;
        for(auto i : a){
            if(i <= mid)
                x++;
        }
        for(auto i : b){
            if(i >= mid)
                y++;
        }

        return x >= y;
    };

    ll l = 0, r = 1e18;

    // cout << l << " " << r << "\n";

    ll ans = r;

    while(l <= r){
        ll mid = (l + r) >> 1;
        if(f(mid)){
            ans = min(ans, mid);
            r = mid - 1;
        }
        else{
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