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
    vvl a(n, vl(3));

    for(int i=0 ; i<n ; i++){
        cin >> a[i][0] >> a[i][1];
        a[i][2] = i + 1;
    }

    sort(all(a), [](const auto x, const auto y){
        ll l = x[0]*(y[0] + y[1]);
        ll r = y[0]*(x[0] + x[1]);
        if(l == r)
            return x[2] < y[2];
        return l > r;
    });

    for(int i=0 ; i<n ; i++){
        cout << a[i][2] << " ";
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