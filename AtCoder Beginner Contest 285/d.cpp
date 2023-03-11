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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string, string> m;
    map<string, int> indegree;

    int n; cin>>n;

    for(int i=0 ; i<n ; i++){
        string from, to;
        cin >> from >> to;
        m[from] = to;
        indegree[from]++;
        indegree[from]--;
        indegree[to]++;
    }

    queue<string> q;
    int ctr = 0;
    for(auto it : m){
        if(indegree[it.first] == 0){
            q.push(it.first);
        }
    }

    while(q.size()){
        ctr++;
        string poped = q.front();
        // cout<<poped<<'\n';
        if(m.count(poped)){
            string nbr = m[poped];
            indegree[nbr]--;
            if(indegree[nbr] == 0){
                q.push(nbr);
            }
        }
        q.pop();
    }
    // cout<<ctr<<' '<<indegree.size();
    if(ctr == indegree.size())
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}