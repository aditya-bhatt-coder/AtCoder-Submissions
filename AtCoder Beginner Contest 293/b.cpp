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

    int n; cin >> n;

    vector<int> a(n+1);
    vector<int> v(n+1);

    for(int i=1 ; i<=n ; i++)
        cin >> a[i];

    for(int i=1 ; i<=n ; i++){
        if(v[i] > 0){
            // cout<<"if\n";
            // continue;
        }
        else{
            // cout<<"el\n";
            v[a[i]]++;
        }
        // print(v);
    }

    int ans = 0;

    for(int i=1 ; i<=n ; i++){
        if(v[i] == 0){
            ans ++;
        }
    }

    cout << ans<<'\n';

    for(int i=1 ; i<=n ; i++){
        if(v[i] == 0){
            cout<<i<<" ";
        }
    }

    return 0;
}