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

    vector<int> a(n+1);
    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
    }

    map<int,ll> m;

    int all = 0;

    for(int i=1 ; i<=n ; i++){
        m[i] = a[i];
    }

    int tc;
    cin>>tc;
    while(tc--){
        int q; cin>>q;
        if(q == 1){
            int x; cin>>x;
            all = x;
            m.clear();
        }
        else if(q == 2){
            int i,x; cin>>i>>x;
            m[i] += x;
        }
        else{
            int i; cin>>i;
            cout<<all + m[i]<<'\n';
        }
    }

    return 0;
}