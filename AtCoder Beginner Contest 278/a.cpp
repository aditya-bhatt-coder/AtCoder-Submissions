// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k; cin>>n>>k;

    vector<int> v(n);
    for(int &i : v) cin>>i;

    for(int i=0 ; i<k ; i++){
        v.erase(v.begin());
        v.push_back(0);
    }

    print(v);

    return 0;
}