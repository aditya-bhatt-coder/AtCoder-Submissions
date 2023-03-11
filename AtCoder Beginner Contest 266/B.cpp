//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define g 998244353
using namespace std;

int main()
{
    ll n; cin>>n;
    ll q = n/g;

    if(n%g==0)
    cout<<0;
    else if(n>0)
    cout<<abs(q*g-n);
    else if(n<0)
    cout<<abs(((q-1)*g)-n);
    else
    cout<<0;

    return 0;
}