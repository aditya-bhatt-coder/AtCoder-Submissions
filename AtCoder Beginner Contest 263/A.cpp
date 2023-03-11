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

    
        map<int,int> m;
        for(int i=0 ; i<5 ; i++){
            int t; cin>>t;
            m[t]++;
        }
        if(m.size()==2 and (m.begin()->second==2 or m.begin()->second==3) )
            cout<<"Yes";
        else
            cout<<"No";

    return 0;
}