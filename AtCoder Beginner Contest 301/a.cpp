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
    int n; cin >> n;
    string s; cin >> s;
    int a = 0, t = 0;

    for(int i=0 ; i<n ; i++){
        if(s[i] == 'A')
            a++;
        else
            t++;
    }

    if(a == t){
        int ctr = a;
        a = 0, t = 0;
        for(int i=0 ; i<n ; i++){
            if(s[i] == 'A')
                a++;
            else
                t++;
            if(a == ctr){
                cout << 'A';
                return;
            }
            if(t == ctr){
                cout << 'T';
                return;
            }
        }

    }else{
        a > t ? cout << 'A' : cout << 'T';
    }
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