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


void solve(){
    int n, m;
    cin >> n >> m;
    
    string s = "snuke";
    map<char, int> mp;
    mp['s'] = 0; mp['n'] = 1;
    mp['u'] = 2; mp['k'] = 3; mp['e'] = 4;
    vector<string> g(n);
    inp(g);
    
    vector<vector<bool>> v(n, vector<bool>(m)); 

    if(g[0][0] != 's'){
        no;
        return;
    }

    queue<vi> q;
    q.push({0, 0});
    v[0][0] = true;

    vi dx = {1, -1, 0, 0};
    vi dy = {0, 0, -1, 1};

    while(q.size()){
        auto cur = q.front(); q.pop();
        char ch = g[cur[0]][cur[1]];
        for(int i=0 ; i<4 ; i++){
            int X = cur[0] + dx[i];
            int Y = cur[1] + dy[i];
            if(X >= 0 and X < n and Y >= 0 and Y < m and !v[X][Y] and g[X][Y] == s[(mp[ch]+1)%5]){
                v[X][Y] = true;
                q.push({X, Y});
            }
        }
    }

    if(v[n - 1][m - 1]){
        yes;
    } else{
        no;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}