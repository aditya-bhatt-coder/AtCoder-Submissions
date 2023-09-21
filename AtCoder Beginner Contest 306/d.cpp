// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
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

    vvl a(n, vl(2, 0));

    for(int i=0 ; i<n ; i++){
        cin >> a[i][0] >> a[i][1];
    }

    vvl dp(n + 1, vl(2, -1e18));
    dp[0][0] = 0;
    dp[0][1] = 0;

    for(int i=0 ; i<n ; i++){
        ll x = a[i][0];
        ll y = a[i][1];

        dp[i + 1][0] = dp[i][0];
        dp[i + 1][1] = dp[i][1];

        if(x == 0){
            dp[i + 1][0] = max(dp[i + 1][0], dp[i][0] + y);
            dp[i + 1][0] = max(dp[i + 1][0], dp[i][1] + y);
        }
        else{
            dp[i + 1][1] = max(dp[i + 1][1], dp[i + 1][0] + y);
        }
    }

    cout << max(dp[n][0], dp[n][1]);
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