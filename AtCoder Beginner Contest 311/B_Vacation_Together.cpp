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
    int n, d;
    cin >> n >> d;
    string s[n];

    for(int i=0 ; i<n ; i++)
        cin >> s[i];

    int ans = 0, ctr = 0;

    for(int i=0 ; i<d ; i++){
        bool ok = true;
        for(int j=0 ; j<n ; j++){
            if(s[j][i] == 'x'){
                ok =false;
                break;
            }
        }
        if(ok){
            ctr++;
            ans = max(ctr, ans);
        }
        else{
            ctr = 0;
        }
    }

    cout << max(ans, ctr);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}