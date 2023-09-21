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

int n, m;

vector<int> parent, sz, cyc;

void make_set(int v){
    parent[v] = v;
    sz[v] = 1;
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
        if(sz[a]<sz[b]) //union by size
            swap(a,b);
        parent[b] = a;
        sz[a] += sz[b];
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
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    cin >> n >> m;

    parent.resize(n);
    sz.resize(n);
    cyc.resize(n);

    for(int i=0 ; i<n ; i++){
        make_set(i);
    }

    for(int i=0 ; i<m ; i++){
        int x,y;
        char a,b;
        cin >> x >> a >> y >> b;
        x--; y--;
        int s1 = find_set(x);
        int s2 = find_set(y);

        if(s1 == s2){
            cyc[s1]++;
        }
        else{
            union_set(x, y);
        }
    }

    set<int> s;

    for(int i=0; i<n; i++)
        s.insert(find_set(i));

    // cout<<s.size();
    int total = s.size();

    for(int i=0 ; i<n ; i++){
        if(cyc[i]){
            int ws = find_set(i);
            if(s.find(ws) != s.end()){
                s.erase(ws);
            }
        }
    }

    cout << total - s.size() << " " << s.size();

    return 0;
}