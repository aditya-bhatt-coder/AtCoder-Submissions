// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;
    string s; cin>>s;

    for(int i=1 ; i<n ; i++){
        int ctr = 0;
        for(int j=0 ; j<n ; j++){
            if(j+i >= n)
                break;
            if(s[j] == s[j+i])
                break;
            ctr++;
        }
        cout<<ctr<<endl;
    }

    return 0;
}