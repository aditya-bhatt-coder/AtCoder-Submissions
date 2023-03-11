// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    
    vector<int> v(n);
    for(int &x : v) cin>>x;

    cout<<max_element(v.begin(),v.end()) - v.begin() + 1;

    return 0;
}