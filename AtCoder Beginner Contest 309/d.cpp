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
    ll n1, n2, m, ans = 0;
    cin >> n1 >> n2 >> m;

    vvl a(n1 + n2 + 1, vl());
    vector<bool> vis(n1 + n2 + m);

    for(int i=0 ; i<m ; i++){
        ll x, y;
        cin >> x >> y;
        a[x].pb(y);
        a[y].pb(x);
    }

    queue<ll> q;
    q.push(1);
    vis[1] = true;

    while(q.size()){
        ans++;
        ll sz = q.size();
        for(int i=0 ; i<sz ; i++){
            ll val = q.front(); q.pop();
            for(auto nbr : a[val]){
                if(!vis[nbr]){
                    vis[nbr] = true;
                    q.push(nbr);
                }
            }
        }
    }

    q.push(n1+n2);
    vis[n1+n2] = true;

    while(q.size()){
        ans++;
        ll sz = q.size();
        for(int i=0 ; i<sz ; i++){
            ll val = q.front(); q.pop();
            for(auto nbr : a[val]){
                if(!vis[nbr]){
                    vis[nbr] = true;
                    q.push(nbr);
                }
            }
        }
    }

    cout << ans - 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}