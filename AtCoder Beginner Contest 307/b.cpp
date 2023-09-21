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

bool isPal(string &s){
    for(int i=0 ; i<s.size()>>1 ; i++){
        if(s[i] != s[s.size() - 1 - i])
            return false;
    }
    return true;
}

void solve(){
    int n; cin >> n;
    string s[n];
    inp(s);

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i == j)
                continue;
            string str = s[i] + s[j];
            if(isPal(str)){
                yes;
                return;
            }
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