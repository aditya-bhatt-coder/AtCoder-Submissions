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

map<string, vector<string>> alist;
map<string, bool> vis;
vector<string> v;
int n, m, d = 0;

bool dfs(string &s){
    d++;
    if(d == n)
        return true;
    vis[s] = true;
    bool val = false;
    for(auto nbr : alist[s]){
        if(!vis[nbr]){
            val = val or dfs(nbr);
        }
    }
    vis[s] = false;
    d--;
    return val;
}

void solve(){
    cin >> n >> m;
    v.resize(n);

    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        vis[v[i]] = false;
    }


    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            int diff = 0;
            for(int k=0 ; k<m ; k++){
                if(v[i][k] != v[j][k])
                    diff++;
            }
            if(diff == 1){
                alist[v[i]].pb(v[j]);
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        if(dfs(v[i])){
            yes; return;
        }
    }
    no;
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