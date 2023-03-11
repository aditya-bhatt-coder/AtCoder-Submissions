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

    int r,c; cin>>r>>c;

    vector<int> ans(c);
    vector<string> v(r);
    for(auto &i : v) cin>>i;

    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            ans[j] += v[i][j] == '#' ? 1 : 0;
        }
    }

    print(ans);

    return 0;
}