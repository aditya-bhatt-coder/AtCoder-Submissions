// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
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
    ll a, b; cin >> a >> b;
    ll ans = 0;

    while(a != b){
        if(a == 1){
            ans += b - a;
            break;
        }
        else if(b == 1){
            ans += a - b;
            break;
        }
        else if(a < b){
            if(b % a == 0){
                ans += b / a - 1;
                break;
            }
            ll times = b / a;
            ans += times;
            b -= a * times;
        }
        else if(a > b){
            if(a % b == 0){
                ans += a / b - 1;
                break;
            }
            ll times = a / b;
            ans += times;
            a -= b * times;
        }
        // cout << a << " " << b << " " << ans << "\n";
    }

    cout << ans;
}

int main()
{
    solve();
    return 0;
}