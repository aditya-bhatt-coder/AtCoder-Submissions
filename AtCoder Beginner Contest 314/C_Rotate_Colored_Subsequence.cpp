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
    string s;
    cin >> s;

    vector<string> a(m, " ");
    vi col(n), ptr(m);
    
    for(int i=0 ; i<n ; i++){
        cin >> col[i];
        col[i]--;
        a[col[i]].pb(s[i]);
    }

    for(int i=0 ; i<m ; i++){
        a[i][0] = a[i][a[i].size() - 1];
    }

    for(int color : col){
        cout << a[color][ptr[color]++];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}