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

int n;
vi a;
vector<bool> v;
int init = 0;

void dfs(int node){
    if(v[node]){
        init = node;
        return;
    }
    else{
        v[node] = true;
        dfs(a[node]);
    }
}

void solve(){
    cin >> n;
    a.resize(n + 1);
    v.resize(n + 1);

    for(int i=1 ; i<=n ; i++){
        cin >> a[i];
    }

    dfs(1);

    vi ans;
    ans.pb(init);
    int node = a[init];

    while(node != init){
        ans.pb(node);
        node = a[node];
    }

    cout << ans.size() << "\n";
    print(ans);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}