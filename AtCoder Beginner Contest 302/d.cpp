// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define input(v) for(auto &i : v) cin >> i
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
    ll n, m, d, ans = -1;
    cin >> n >> m >> d;

    vl a(n), b(m);
    input(a); input(b);
    sort(all(a)); sort(all(b));

    for(int i=m-1 ; i>=0 ; i--){
        auto lb = lower_bound(all(a), b[i] + d + 1);
        if(lb == a.begin())
            continue;
        lb = prev(lb);
        if(abs(*lb - b[i]) > d)
            continue;
        ans = max(ans, *lb + b[i]);
    }

    cout << ans;
}

int main()
{
    solve();

    return 0;
}