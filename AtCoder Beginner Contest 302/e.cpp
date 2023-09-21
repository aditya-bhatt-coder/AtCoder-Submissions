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
    int n, q; std::cin >> n >> q;
    vector<set<int>> alist(n);
    int ans = n;
    
    while(q--){
        int type;
        std::cin >> type;

        if(type == 1){
            int a, b; std::cin >> a >> b;
            a--; b--;

            if(alist[a].size() == 0)
                ans--;

            if(alist[b].size() == 0)
                ans--;

            alist[a].insert(b);
            alist[b].insert(a);
        }
        else{
            int a; cin >> a; a--;

            if(alist[a].size() != 0){
                for(auto nbr : alist[a]){
                    alist[nbr].erase(a);
                    if(alist[nbr].size() == 0)
                        ans++;
                }
                ans++;
            }

            alist[a].clear();
        }

        cout << ans << "\n";
    }
}

int main()
{
    solve();
    return 0;
}