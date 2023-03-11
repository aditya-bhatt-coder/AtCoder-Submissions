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
    int n; cin>>n;

    vector<int> v(n);
    for(int &x : v) cin>>x;

    cout<<(int)log2(v[0])<<'\n';
    for(int i=0 ; i<n ; i++){
        cout<<(int)log2(2*v[i])<<endl;
        cout<<(int)log2(2*v[i]+1)<<endl;
    }

    return 0;
}