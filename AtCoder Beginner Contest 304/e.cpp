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

vector<int> parent, dsu_sz;
// remember to resize parent and dsu_sz

void make_set(int n){
    for(int i = 0 ; i < n ; i++){
        parent[i] = i;
        dsu_sz[i] = 1;
    }
}

int find_set(int v){
    if(v==parent[v])
        return v;
    return parent[v] = find_set(parent[v]); //path compression
}

void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a != b){
        if(dsu_sz[a] < dsu_sz[b]) //union by size
            swap(a,b);
        parent[b] = a;
        dsu_sz[a] += dsu_sz[b];
    }
}

int connectedComponents(int n){
    set<int> s;

    for(int i = 0 ; i < n ; i++)
        s.insert(find_set(i));

    return s.size();
}

void solve(){
    int n, m;
    cin >> n >> m;

    parent.resize(n);
    dsu_sz.resize(n);

    make_set(n);

    int e1, e2;
    for(int i=0 ; i<m ; i++){
        cin >> e1 >> e2;
        e1--; e2--;
        union_set(e1, e2);
    }

    set<vi> s;

    int k; cin >> k;
    for(int i=0 ; i<k ; i++){
        cin >> e1 >> e2;
        e1--; e2--;
        e1 = find_set(e1);
        e2 = find_set(e2);
        s.insert({e1, e2});
        s.insert({e2, e1});
    }

    int q; cin >> q;
    for(int i=0 ; i<q ; i++){
        cin >> e1 >> e2;
        e1--; e2--;
        e1 = find_set(e1);
        e2 = find_set(e2);
        if(e1 == e2){
            yes;
        }
        else if(s.find({e1, e2}) == s.end()){
            yes;
        }
        else{
            no;
        }
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