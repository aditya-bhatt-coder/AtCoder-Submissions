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
    vl p(n), c(n);
    set<ll> s[n];

    for(int i=0 ; i<n ; i++){
        cin >> p[i] >> c[i];
        for(int j=0 ; j<c[i] ; j++){
            ll val; cin >> val;
            s[i].insert(val);
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(p[i] >= p[j]){
                bool ok = true;
                for(auto val : s[i]){
                    if(!s[j].count(val)){
                        ok = false;
                        break;
                    }
                }
                if(ok and s[j].size() > s[i].size()){
                    yes; return;
                }
            }
        }
    }

    no;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}