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

set<int> req;
vector<set<int>> a;
int ans = 0;

void dfs(int idx, set<int> temp){
    for(auto it : a[idx])
        temp.insert(it);
    if(req == temp){
        // cout << "\nidx : "<<idx<<'\n';
        ans++;
    }
    
    for(int i=idx+1 ; i<a.size() ; i++){
        dfs(i, temp);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i=1 ; i<=n ; i++)
        req.insert(i);

    for(int i=0 ; i<m ; i++){
        set<int> s;
        int num;
        cin >> num;
        for(int j=0 ; j<num ; j++){
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        a.push_back(s);
    }

    set<int> temp;
    for(int i=0 ; i<a.size() ; i++)
        dfs(i, temp);

    cout << ans;

    return 0;
}