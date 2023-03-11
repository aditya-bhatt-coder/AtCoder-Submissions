// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;

    vector<vector<int>> v(n+1, vector<int>());

    for(int i=0 ; i<m ; i++){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=1 ; i<=n ; i++){
        cout<<v[i].size()<<" ";
        sort(v[i].begin(),v[i].end());
        for(int j=0 ; j<v[i].size() ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}