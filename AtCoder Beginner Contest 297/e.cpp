// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    ll n, k; cin >> n >> k;
    vl a(n); input(a);

    set<ll> used;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    pq.push(0);
    
    while(k--){
        ll val = pq.top(); pq.pop();
        for(ll x : a){
            ll newval = x + val;
            if(used.find(newval) == used.end()){
                used.insert(newval);
                pq.push(newval);
            }
        }
    }

    cout << pq.top();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}