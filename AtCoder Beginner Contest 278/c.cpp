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

    map<int, set<int>> m;

    int n, q; cin>>n>>q;

    for(int i=0 ; i<q ; i++){
        int t,a,b;
        cin>>t>>a>>b;

        if(t == 1){
            m[a].insert(b);
        }
        else if(t == 2){
            m[a].erase(b);
        }
        else{
            if(m[a].find(b) == m[a].end()){
                cout<<"No\n";
                continue;
            }
            if(m[b].find(a) == m[b].end()){
                cout<<"No\n";
                continue;
            }
            cout<<"Yes\n";
        }
    }

    return 0;
}