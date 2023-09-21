// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "Yes"
#define no cout << "No"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define inp(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

int n, m;
vector<string> s;
vector<vector<vector<bool>>> v;
vi l = {0, -1};
vi r = {0, 1};
vi u = {1, 0};
vi d = {-1, 0};
// l r u d

void dfs(int i, int j, vector<int>& dir){
    if(dir == l){
        if(v[i][j][0])  return;
        else    v[i][j][0] = true;
    }
    if(dir == r){
        if(v[i][j][1])  return;
        else    v[i][j][1] = true;
    }
    if(dir == u){
        if(v[i][j][2])  return;
        else    v[i][j][2] = true;
    }
    if(dir == d){
        if(v[i][j][3])  return;
        else    v[i][j][3] = true;
    }
    if(i + dir[0] < n and i + dir[0] >= 0 and j + dir[1] < m and j + dir[1] >= 0 and s[i + dir[0]][j + dir[1]] == '.'){
        dfs(i + dir[0], j + dir[1], dir);
    }
    else{
        if(dir == l or dir == r){
            // go up
            if(i + u[0] < n and i + u[0] >= 0 and j + u[1] < m and j + u[1] >= 0 and s[i + u[0]][j + u[1]] == '.'){
                dfs(i + u[0], j + u[1], u);
            }
            // go down
            if(i + d[0] < n and i + d[0] >= 0 and j + d[1] < m and j + d[1] >= 0 and s[i + d[0]][j + d[1]] == '.'){
                dfs(i + d[0], j + d[1], d);
            }
        }
        else{
            // go left
            if(i + l[0] < n and i + l[0] >= 0 and j + l[1] < m and j + l[1] >= 0 and s[i + l[0]][j + l[1]] == '.'){
                dfs(i + l[0], j + l[1], l);
            }
            // go right
            if(i + r[0] < n and i + r[0] >= 0 and j + r[1] < m and j + r[1] >= 0 and s[i + r[0]][j + r[1]] == '.'){
                dfs(i + r[0], j + r[1], r);
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    s.resize(n);
    v.resize(n, vector<vector<bool>> (m, vector<bool> (4)));

    for(int i=0 ; i<n ; i++)
        cin >> s[i];

    dfs(1, 1, r);
    dfs(1, 1, d);

    int ans = 0;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            ans += (v[i][j][0] or v[i][j][1] or v[i][j][2] or v[i][j][3]);
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}