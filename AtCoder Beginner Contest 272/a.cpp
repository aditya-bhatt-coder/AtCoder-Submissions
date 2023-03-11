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

    int n,t; cin>>n;
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        cin>>t;
        sum+=t;
    }
    cout<<sum;
    return 0;
}