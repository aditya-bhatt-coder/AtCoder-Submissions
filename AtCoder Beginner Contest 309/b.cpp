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
        cout << v[i];
    cout << '\n';
}

void solve(){
    int n; cin >> n;
    vvi a(n, vi(n));
    
    for(int i=0 ; i<n ; i++){
        string s; cin >> s;
        for(int j=0 ; j<n ; j++){
            a[i][j] = s[j] == '1' ? 1 : 0;
        }
    }

    vi o;

    for(int i=0 ; i<n-1 ; i++){
        o.pb(a[0][i]);
    }
    for(int i=0 ; i<n-1 ; i++){
        o.pb(a[i][n-1]);
    }
    for(int i=n-1 ; i>0 ; i--){
        o.pb(a[n-1][i]);
    }
    for(int i=n-1 ; i>0 ; i--){
        o.pb(a[i][0]);
    }

    reverse(all(o));

    for(int i=1 ; i<n ; i++){
        a[0][i] = o.back();
        o.pop_back();
    }
    for(int i=1 ; i<n ; i++){
        a[i][n-1] = o.back();
        o.pop_back();
    }
    for(int i=n-2 ; i>=0 ; i--){
        a[n-1][i] = o.back();
        o.pop_back();
    }
    for(int i=n-2 ; i>=0 ; i--){
        a[i][0] = o.back();
        o.pop_back();
    }

    for(auto it : a)
        print(it);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}