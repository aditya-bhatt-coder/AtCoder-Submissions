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

int n, m, ans = 0;
vvi a;
vector<bool> v;

void dfs(int node, int sum){
    // cout << node << " " << sum << endl;
    v[node] = true;
    ans = max(ans, sum);

    for(int i=0 ; i<n ; i++)
        if(a[node][i] and !v[i])
            dfs(i, sum + a[node][i]);

    v[node] = false;
}

void solve(){
    cin >> n >> m;

    a.resize(n, vi (n));
    v.resize(n, false);

    for(int i=0 ; i<m ; i++){
        int A, B, C;
        cin >> A >> B >> C;
        A--; B--;
        a[A][B] = C;
        a[B][A] = C;
    }

    for(int i=0 ; i<n ; i++)
        dfs(i, 0);

    // print(a[0]);

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