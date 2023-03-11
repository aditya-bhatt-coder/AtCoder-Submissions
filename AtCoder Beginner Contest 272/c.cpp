//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,t;
    cin>>n;

    vector<ll> e(2,-1),o(2,-1);

    for(int i=0 ; i<n ; i++){
        cin>>t;
        if(t%2==0){
            e[0] = max(e[0],t);
            sort(e.begin(),e.end());
        }
        else{
            o[0] = max(o[0],t);
            sort(o.begin(),o.end());
        }
    }

    ll ans = -1;

    if(o[0]!=-1 and o[1]!=-1){
        ans = o[0] + o[1];
    }
    if(e[0]!=-1 and e[1]!=-1){
        ans = max(e[0] + e[1], ans);
    }

    cout<<ans;

    return 0;
}