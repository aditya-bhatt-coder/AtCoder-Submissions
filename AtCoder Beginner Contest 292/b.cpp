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

    int n, q;
    cin >> n >> q;

    vector<int> v(n+1);

    while(q--){
        int type, player;
        cin >> type >> player;
        if(type == 1){
            v[player]++;
        }
        else if(type == 2){
            v[player]+=2;
        }
        else{
            if(v[player] >= 2){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }

    return 0;
}