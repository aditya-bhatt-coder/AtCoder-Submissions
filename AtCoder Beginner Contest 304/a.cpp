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
    int n; cin >> n;
    vector<pair<string, int>> v(n);

    for(int i=0 ; i<n ; i++){
        cin >> v[i].first >> v[i].second;
    }

    int idx = 0;
    for(int i=0 ; i<n ; i++){
        if(v[i].second < v[idx].second){
            idx = i;
        }
    }

    for(int i=0 ; i<n ; i++){
        cout << v[(idx + i)%n].first << "\n";
    }
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    // int tc;
    // cin>>tc;
    // while(tc--){
        solve();
    // }

    return 0;
}