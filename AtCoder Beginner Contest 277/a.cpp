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

    int n, x, ans;
    cin >> n >> x;

    vector<int> a(n);
    for(int &x : a) cin >> x;

    for(int i=0 ; i<n ; i++){
        if( a[i] == x ){
            ans = i + 1;
            break;
        }
    }

    cout << ans;

    return 0;
}