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
    string s[n];

    for(int i=0 ; i<n ; i++)
        cin >> s[i];

    vvi ans;

    for(int i=0 ; i<n-8 ; i++){
        for(int j=0 ; j<m-8 ; j++){
            if(s[i][j] == '#' and s[i][j+1] == '#' and s[i][j+2] == '#' and s[i+1][j] == '#' and s[i+1][j+1] == '#' and s[i+1][j+2] == '#' and s[i+2][j] == '#' and s[i+2][j+1] == '#' and s[i+2][j+2] == '#')

            if(s[i+6][j+6] == '#' and s[i+6][j+7] == '#' and s[i+6][j+8] == '#' and s[i+7][j+6] == '#' and s[i+7][j+7] == '#' and s[i+7][j+8] == '#' and s[i+8][j+6] == '#' and s[i+8][j+7] == '#' and s[i+8][j+8] == '#')

            if(s[i+3][j] == '.' and s[i+3][j+1] == '.' and s[i+3][j+2] == '.' and s[i+3][j+3] == '.' and s[i][j+3] == '.' and s[i+1][j+3] == '.' and s[i+2][j+3] == '.')
            
            if(s[i+5][j+5] == '.' and s[i+5][j+6] == '.' and s[i+5][j+7] == '.' and s[i+5][j+8] == '.' and s[i+6][j+5] == '.' and s[i+7][j+5] == '.' and s[i+8][j+5] == '.')

            ans.pb({i + 1, j + 1});
        }
    }

    for(auto v : ans)
        print(v);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}