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
    int n; cin >> n;
    int l = 0, r = n - 1;

    while(l <= r){
        int mid = (r + l) >> 1;
        cout << "? " << mid + 1 << endl;
        int inp; cin >> inp;

        if(inp == 0){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }

    cout << "? " << l + 1 << endl;
    int inp; cin >> inp;

    if(inp == 1){
        cout << "! " << l;
    }else{
        cout << "! " << l + 1;
    }
}

int main()
{
    solve();
    return 0;
}