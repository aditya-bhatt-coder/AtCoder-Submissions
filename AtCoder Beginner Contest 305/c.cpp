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
    int r, c;
    cin >> r >> c;

    vector<string> v(r);
    input(v);

    int ar = -1, ac = -1;
    int H = 0;
    for(int i=0 ; i<r ; i++){
        int h = 0;
        for(int j=0 ; j<c ; j++){
            if(v[i][j] == '#')
                h++;
        }
        if(h){
            if(ar == -1)
                ar = i;
            if(h < H)
                ar = i;
            H = max(H, h);
        }
    }

    H = 0;
    for(int i=0 ; i<c ; i++){
        int h = 0;
        for(int j=0 ; j<r ; j++){
            if(v[j][i] == '#')
                h++;
        }
        if(h){
            if(ac == -1)
                ac = i;
            if(h < H)
                ac = i;
            H = max(H, h);
        }
    }

    cout << ar + 1 << " " << ac + 1;
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