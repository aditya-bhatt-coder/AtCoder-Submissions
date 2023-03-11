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

    int n; cin>>n;
    int ans = 1;

    map<int,bool> m;
    map<int,vector<int>> alist;

    for(int i=0 ; i<n ; i++){
        int a, b; cin>>a>>b;
        alist[a].push_back(b);
        alist[b].push_back(a);
        m[a] = false;
        m[b] = false;
    }

    queue<int> q;
    q.push(1);
    m[1] = true;

    while(q.size()){
        int poped = q.front(); q.pop();
        ans = max(ans,poped);
        for(int i=0 ; i<alist[poped].size() ; i++){
            if(!m[alist[poped][i]]){
                q.push(alist[poped][i]);
                m[alist[poped][i]] = true;
            }
        }
        // cout << "Hi\n";
    }

    cout << ans;

    return 0;
}