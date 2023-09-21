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
    int n; cin >> n;
    vvi a(n, vi(2));

    for(int i=0 ; i<n ; i++)
        cin >> a[i][0] >> a[i][1];

    sort(all(a), [](auto const a, auto const b){
        return a[1] > b[1];
    });

    int f0 = a[0][0];
    int s0 = a[0][1];
    int ans = a[0][0] == a[1][0] ? a[0][1] + a[1][1] / 2 : a[0][1] + a[1][1];

    for(int i=2 ; i<n ; i++){
        if(f0 != a[i][0]){
            ans = max(ans, s0 + a[i][1]);
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