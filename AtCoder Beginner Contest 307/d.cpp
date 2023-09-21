// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
    string s, t = ""; cin >> s;
    int ctr = 0;

    for(int i=0 ; i<n ; i++){
        if(s[i] >= 'a' and s[i] <= 'z')
            t += s[i];
        else if(s[i] == '('){
            ctr++; t += s[i];
        }
        else{
            if(ctr > 0){
                while(ctr > 0){
                    char back = t.back();
                    t.pop_back();
                    if(back == '('){
                        break;
                    }
                }
            } else{
                t += s[i];
            }
            ctr = max(ctr - 1, 0);
        }
    }

    cout << t;
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