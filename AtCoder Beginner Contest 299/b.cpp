// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vii vector<vi>
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
    int n, t; cin >> n >> t;
    vi c(n), r(n);
    input(c); input(r);
    int ans = -1;

    for(int i=0 ; i<n ; i++){
        if(c[i] == t){
            if(ans == -1){
                ans = i;
            }
            else if(r[ans] < r[i]){
                ans = i;
            }
        }
    }

    if(ans != -1){
        cout << ans + 1;
        return;
    }

    t = c[0];
    for(int i=0 ; i<n ; i++){
        if(c[i] == t){
            if(ans == -1){
                ans = i;
            }
            else if(r[ans] < r[i]){
                ans = i;
            }
        }
    }

    cout << ans + 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}