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

int mex(int x, int y, int z) {
    for (int i = 0; i < 3; i++) {
        if (x != i and y != i and z != i) return i;
    }
    return 3;
}

void solve(){
    int n; cin >> n;
    vi a(n); inp(a);
    string s; cin >> s;

    vvi m(n + 1, vi(3));
    vvi x(n + 1, vi(3));

    for(int i=n - 1 ; i>=0 ; i--){
        x[i] = x[i + 1];
        if(s[i] == 'X')
            x[i][a[i]]++;
    }

    for(int i=0 ; i<n ; i++){
        m[i + 1] = m[i];
        if(s[i] == 'M')
            m[i + 1][a[i]]++;
    }

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != 'E') continue;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                ans += (ll) m[i][j] * x[i + 1][k] * mex(j, a[i], k);
            }
        }
    }

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