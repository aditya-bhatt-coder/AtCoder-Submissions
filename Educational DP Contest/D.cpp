//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll dp[101][100001];

ll mx(ll a, ll b){
    if(a>b)
        return a;
    return b;
}

ll knapsack(vector<int> &w, vector<int> &v, int W, int n){
    if(n==0 or W==0)
        return 0;
    if(dp[n][W]!=-1)
        return dp[n][W];
    if(w[n-1]>W)
        return dp[n][W] = knapsack(w,v,W,n-1);
    else
        return dp[n][W] = mx( knapsack(w,v,W,n-1) , 
            v[n-1] + knapsack(w,v,W-w[n-1],n-1));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,W;
    cin>>N>>W;
    vector<int> v(N);
    vector<int> w(N);
    for(int i=0 ; i<N ; i++)
        cin>>w[i]>>v[i];

    memset(dp,-1,sizeof(dp));
    cout<<knapsack(w,v,W,N);

    return 0;
}