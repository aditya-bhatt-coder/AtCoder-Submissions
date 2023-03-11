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

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> v(n+1);
    vector<int> ind(n+1);
    bool ok = true;

    for(int i=0 ; i<m ; i++){
        int from, to;
        cin >> from >> to;
        if(v[from] == 0){
            v[from] = to;
            ind[to]++;
        }
        else if(v[from] == to)
            continue;
        else{
            ok = false;
        }
    }

    // print(v);
    // print(ind);

    if(!ok){
        cout<<"No\n";
        return 0;
    }

    queue<int> q;
    vector<int> topo;

    for(int i=1 ; i<=n ; i++){
        if(ind[i] == 0){
            q.push(i);
            topo.push_back(i);
        }
    }

    while(q.size()){
        int sz = q.size();
        if(sz >= 2){
            ok = false;
            break;
        }
        int poped = q.front(); q.pop();
        // cout<<poped<<'\n';
        if(v[poped] == 0)
            continue;
        ind[v[poped]]--;
        if(ind[v[poped]] == 0){
            q.push(v[poped]);
            topo.push_back(v[poped]);
        }
    }

    // cout<<"TESTING\n";
    // cout<<ok<<" "<<topo.size()<<'\n';
    if(ok and topo.size()==n){
        cout<<"Yes\n";
        vector<int> ans(n+1);
        for(int i=0 ; i<n ; i++){
            ans[topo[i]] = i+1;
        }
        for(int i=1 ; i<=n ; i++){
            cout<<ans[i]<<" ";
        }
    }
    else{
        cout<<"No\n";
    }

    return 0;
}