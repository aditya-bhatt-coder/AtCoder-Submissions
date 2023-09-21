// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    int n, m, h, k, x = 0, y = 0;
    cin >> n >> m >> h >> k;
    string s; cin >> s;

    set<vi> st;

    for(int i=0 ; i<m ; i++){
        int t1, t2; cin >> t1 >> t2;
        st.insert({t1, t2});
    }

    for(int i=0 ; i<n ; i++){
        h--;
        if(h < 0){
            no; return;
        }
        if(s[i] == 'L')
            x--;
        if(s[i] == 'R')
            x++;
        if(s[i] == 'U')
            y++;
        if(s[i] == 'D')
            y--;
        if(st.find({x, y}) != st.end() and h < k){
            st.erase({x, y});
            h = k;
        }
    }

    yes;
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