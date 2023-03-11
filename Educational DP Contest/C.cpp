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

    int n; cin>>n;
    vector<vector<int>> a(n,vector<int> (3));
    //inputs
    for(int j=0 ; j<3 ; j++)
        cin>>a[0][j];
    
    for(int i=1 ; i<n ; i++){
        for(int j=0 ; j<3 ; j++){
            cin>>a[i][j];
            if(j==0)
                a[i][j] += max(a[i-1][1],a[i-1][2]);
            else if(j==1)
                a[i][j] += max(a[i-1][0],a[i-1][2]);
            else
                a[i][j] += max(a[i-1][0],a[i-1][1]);
        }
    }

    cout<<max(a[n-1][0], max(a[n-1][1],a[n-1][2]));

    return 0;
}