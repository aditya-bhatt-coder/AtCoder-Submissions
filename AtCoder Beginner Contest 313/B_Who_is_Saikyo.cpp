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

    vi s(n);

    for(int i=0 ; i<m ; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        s[b]++;
    }

    int ans = -1;

    for(int i=0 ; i<n ; i++){
        if(s[i] == 0){
            if(ans != -1){
                cout << -1;
                return;
            }
            else{
                ans = i + 1;
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