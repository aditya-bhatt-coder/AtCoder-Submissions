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
    vector<multiset<int>> box(1e5*2+5);
    vector<set<int>> card(1e5*2+5);
    int n, q; cin >> n >> q;

    while(q--){
        int type; cin >> type;
        if(type == 1){
            int a, b; cin >> a >> b;
            box[b].insert(a);
            card[a].insert(b);
        }
        else if(type == 2){
            int a; cin >> a;
            for(auto x : box[a])
                cout << x << " ";
            cout << "\n";
        }
        else{
            int a; cin >> a;
            for(auto x : card[a])
                cout << x << " ";
            cout << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}