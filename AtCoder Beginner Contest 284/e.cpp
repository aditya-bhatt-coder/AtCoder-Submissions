// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> alist;
vector<bool> v;
int ans = 0;

void dfs(int node){
    ans++;

    if(ans >= 1000000){
        cout<<1000000;
        exit(0);
    }

    v[node] = true;

    for(auto nbr : alist[node]){
        if(!v[nbr]){
            dfs(nbr);
        }
    }
    v[node] = false;
}

int main()
{
    int n,m;
    cin>>n>>m;

    alist.resize(n, vector<int>());
    v.resize(n,false);

    for(int i=0 ; i<m ; i++){
        int a, b;
        cin>>a>>b;
        a--;b--;
        alist[a].push_back(b);
        alist[b].push_back(a);
    }

    dfs(0);

    cout<<ans;

    return 0;
}