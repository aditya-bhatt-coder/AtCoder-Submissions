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
    char a, b;
    cin >> a >> b;

    if(a > b){
        swap(a, b);
    }

    map<char, int> m;
    m['B'] = 3; 
    m['C'] = 1; 
    m['D'] = 4; 
    m['E'] = 1; 
    m['F'] = 5; 
    m['G'] = 9;

    int ans = 0;
    for(char i=a + 1 ; i<=b ; i++){
        ans += m[i];
    }

    cout << ans;
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