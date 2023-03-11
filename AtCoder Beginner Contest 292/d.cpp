// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

vector<vector<int>> alist;
vector<int> parent;
vector<int> cap;
vector<int> v;
vector<int> e;

void make_set(int v){
    parent[v] = v;
    cap[v] = 1;
}

int find_set(int v){
    if(v==parent[v])
        return v;
    return parent[v] = find_set(parent[v]); //path compression
}

void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        if(cap[a]<cap[b]) //union by size
            swap(a,b);
        parent[b] = a;
        cap[a] += cap[b];
    }
}

int connectedComponents(int n){
    set<int> s;

    for(int i=0; i<n; i++)
        s.insert(parent[i]);

    return s.size();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    // cout<<"TESTING\n";
    alist.resize(n+1, vector<int> ());
    parent.resize(n+1);
    cap.resize(n+1);
    v.resize(n+1);
    e.resize(n+1);

    for(int i=1 ; i<=n ; i++){
        make_set(i);
    }

    for(int i=0 ; i<m ; i++){
        int from, to;
        cin >> from >> to;
        alist[from].push_back(to);
        union_set(from, to);
    }

    for(int i=1 ; i<=n ; i++){
        int root = find_set(i);
        v[root]++;
        e[root] += alist[i].size();
        // cout<<alist[i].size()<<" ";
    }
    // cout<<'\n';

    // print(parent);
    // print(v);
    // print(e);

    if(v == e){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }

    return 0;
}