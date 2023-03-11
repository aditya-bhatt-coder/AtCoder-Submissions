// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<string> v(n);

    for(int i=n-1 ; i>=0 ; i--)
        cin>>v[i];

    for(auto str : v)
        cout<<str<<'\n';

    return 0;
}