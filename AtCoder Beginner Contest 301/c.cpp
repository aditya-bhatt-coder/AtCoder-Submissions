// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    string a, b;
    cin >> a >> b;

    int n = a.size(), at1 = 0, at2 = 0;
    vi aa(26), bb(26);

    for(int i=0 ; i<n ; i++){
        if(a[i] == '@')
            at1++;
        else
            aa[a[i] - 'a']++;
        
        if(b[i] == '@')
            at2++;
        else
            bb[b[i] - 'a']++;
    }

    int r1 = 0, r2 = 0;
    for(int i=0 ; i<26 ; i++){
        if(aa[i] != bb[i]){
            if(i == 0 or i == 19 or i == 2 or i == 14 or i == 3 or i == 4 or i == 17){
                
            }else{
                no; return;
            }
        }
        if(aa[i] < bb[i]){
            r2 += bb[i] - aa[i];
        }
        else{
            r1 += aa[i] - bb[i];
        }
    }

    // cout << at1 << " " << r1 << "\n";
    // cout << at2 << " " << r2 << "\n";

    if(at1 >= r2 and at2 >= r1){
        yes;
    }else{
        no;
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