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
    string s; cin>>s;

    int ans = -1;

    for(int i=0 ; i<s.size() ; i++)
        if(s[i] == 'a')
            ans = i+1;

    cout<<ans;

    return 0;
}