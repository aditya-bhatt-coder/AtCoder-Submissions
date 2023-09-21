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

string s;
ll val;

ll f(){
    ll ret = 0;
    for(int i=s.size() - 1 ; i>=0 ; i--){
        if(s[i] == '1'){
            ret += (1 << i);
        }
    }
    return ret;
}

void solve(){
    cin >> s >> val;
    ll ans = -1;

    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '?'){
            s[i] = '1';

            ll ret = f();

            if(ret <= val){
                ans = max(ans, ret);
            }
            else{
                s[i] = '0';
            }
        }
        else{
            ll ret = f();
            if(ret <= val){
                ans = max(ans, ret);
            }
        }
    }

    cout << ans ;
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