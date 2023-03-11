//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ; j++){
            if(i==j or j==0)
                a[i][j]=1;
            else
                a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    

    return 0;
}