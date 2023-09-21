// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define input(v) for(auto &i : v) cin >> i, i--
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
    int c, r; cin >> c >> r;
    vvi a(r, vi (c)), v(r, vi (c));

    int ans = (c * (c - 1)) / 2;

    set<vi> s;

    for(int i=0 ; i<r ; i++)
        input(a[i]);

    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c - 1 ; j++){
            s.insert({a[i][j], a[i][j+1]});
            s.insert({a[i][j + 1], a[i][j]});
        }
    }

    cout << ans - s.size()/2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int tc;
    // cin>>tc;
    // while(tc--){
        solve();
    // }

    return 0;
}