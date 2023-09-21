// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) {cin >> i; m[i]++;}
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    ll n, x; cin >> n >> x;
    vi a(n);
    unordered_map<int, int> m;
    input(a)

    for(int i=0 ; i<n ; i++){
        if(m[a[i] - x]){
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