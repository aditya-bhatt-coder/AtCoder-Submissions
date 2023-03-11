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

vector<vector<char>> g;
vector<vector<bool>> v;
int ans = 0, depth = 0;
int r, c;

inline bool can(int i, int j){
    if(i>=0 and j>=0 and i<r and j<c and g[i][j] != '#')
        return true;
    return false;
}

void dfs(int i, int j){
    // cout<<i<<" "<<j<<'\n';

    if(v[i][j] == true){
        if(g[i][j] == 'S')
            ans = max(ans,depth);
        return;
    }

    v[i][j] = true;

    if(can(i, j + 1)){
        depth++;
        dfs(i, j + 1);
        depth--;
    }
    if(can(i + 1, j)){
        depth++;
        dfs(i + 1, j);
        depth--;
    }
    if(can(i, j - 1)){
        depth++;
        dfs(i, j - 1);
        depth--;
    }
    if(can(i - 1, j)){
        depth++;
        dfs(i - 1, j);
        depth--;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>r>>c;
    v.resize(r,vector<bool> (c));
    int si = -1, sj = -1;

    for(int i=0 ; i<r ; i++){
        string s; cin>>s;
        vector<char> t;
        for(int j=0 ; j<c ; j++){
            t.push_back(s[j]);
            if(s[j] == 'S')
                si = i,
                sj = j;
        }
        g.push_back(t);
    }

    dfs(si, sj);

    ans >= 4 ? cout<<"Yes" : cout<<"No";

    return 0;
}