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

    string s; cin>>s;
    int n = s.size();
    ll ans = 0;
    ll curr = 26;

    reverse(s.begin(),s.end());

    ans = (s[0] - 'A' + 1);

    for(int i=1 ; i<n ; i++){
        ans += curr * (s[i] - 'A' + 1);
        curr *= 26;
    }

    cout<<ans;

    return 0;
}