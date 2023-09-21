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

double dist(vector<int> a, vector<int> b){
    return sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2));
}

void solve(){
    int n, d;
    cin >> n >> d;

    vvi a(n, vi (2));
    vi v(n);

    for(int i=0 ; i<n ; i++){
        cin >> a[i][0] >> a[i][1];
    }

    queue<vi> q;
    q.push({a[0][0], a[0][1]});
    v[0] = 1;

    while(q.size()){
        auto p = q.front(); q.pop();
        for(int i=0 ; i<n ; i++){
            if(!v[i] and dist(p, a[i]) <= d){
                q.push(a[i]);
                v[i] = 1;
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        if(v[i])
            yes;
        else
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