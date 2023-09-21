// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
    ll x, y, z;
    cin >> x >> y >> z;
    string s; 
    cin >> s;
    ll n = s.size();

    vvl dp(n + 1, vl(2, 1e18));

    if(s[0] == 'a'){
        dp[1][0] = x;
        dp[1][1] = z + y;
    }
    else{
        dp[1][0] = y;
        dp[1][1] = z + x;
    }

    for(int i=2 ; i<=n ; i++){
        if(s[i - 1] == 'a'){
            dp[i][0] = min(dp[i - 1][0] + x, dp[i - 1][1] + z + x);
            dp[i][1] = min(dp[i - 1][0] + z + y, dp[i - 1][1] + y);
        }
        else{
            dp[i][0] = min(dp[i - 1][0] + y, dp[i - 1][1] + z + y);
            dp[i][1] = min(dp[i - 1][0] + z + x, dp[i - 1][1] + x);
        }
    }

    cout << min(dp[n][0], dp[n][1]);
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