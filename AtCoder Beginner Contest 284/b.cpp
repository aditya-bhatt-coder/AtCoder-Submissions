// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        int in=0, o=0;
        for(int i=0 ; i<n ; i++){
            cin>>in;
            if(in%2 != 0)
                o++;
        }
        cout<<o<<'\n';
    }

    return 0;
}