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
    int gcd = 0, ans = 0;
    
    vector<int> v(n);
    for(int &x : v){
        cin>>x;
        gcd = __gcd(x,gcd);
    }

    for(int i=0 ; i<n ; i++){
        v[i] = v[i] / gcd ;

        while(v[i] % 2 == 0) v[i] /= 2, ans ++;

        while(v[i] % 3 == 0) v[i] /= 3, ans ++;

        if(v[i] != 1){
            cout<<-1;
            return 0;
        }
    }

    cout<<ans;

    return 0;
}