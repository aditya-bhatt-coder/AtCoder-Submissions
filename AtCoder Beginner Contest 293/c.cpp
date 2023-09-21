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

vector<vector<int>> m;
vector<vector<bool>> v;
int r, c, ans = 0;

inline bool isValid(int i, int j){
    return i>=0 and i<r and j>=0 and j<c and v[i][j]==false;
}

void dfs(int i, int j, set<int> s){
    // cout<<i<<" "<<j<<'\n';
    v[i][j] = true;
    int val = m[i][j];
    if(s.find(val) != s.end()){
        v[i][j] = false;
        return;
    }
    s.insert(val);
    if(i == r-1 and j == c-1){
        ans++;
        v[i][j] = false;
        return;
    }
    if(isValid(i+1, j))
        dfs(i+1, j, s);

    if(isValid(i, j+1))
        dfs(i, j+1, s);
    
    v[i][j] = false;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> r >> c;
    m.resize(r, vector<int>(c));
    v.resize(r, vector<bool>(c, false));

    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin >> m[i][j];
        }
    }

    set<int> s;
    dfs(0, 0, s);

    cout << ans;

    return 0;
}