// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans=0;
    cin>>n>>m;

    vector<vector<int>> alist(n, vector<int>());
    vector<bool> v(n,false);

    for(int i=0 ; i<m ; i++){
        int a, b;
        cin>>a>>b;
        a--;b--;
        alist[a].push_back(b);
        alist[b].push_back(a);
    }

    auto bfs = [&](int node){
        queue<int> q;
        q.push(node);
        v[node] = true;

        while(q.size()){
            int f = q.front();q.pop();
            for(auto nbr : alist[f]){
                if(!v[nbr]){
                    v[nbr] = true;
                    q.push(nbr);
                }
            }
        }
    };

    for(int i=0 ; i<n ; i++)
        if(!v[i])
            ans++, bfs(i);

    cout<<ans;

    return 0;
}