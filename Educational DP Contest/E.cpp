//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int N,W;
vector<int> v;
vector<int> w;
ll dp[101][100001];//[n][val]

ll knapsack(int ind, int val){
    if(val==0)
        return 0;
    if(ind<0)
        return 1e15;
    if(dp[ind][val]!=-1)
        return dp[ind][val];
    if(val-v[ind]>=0)
        return dp[ind][val] = min( knapsack(ind-1,val-v[ind]) + w[ind] , knapsack(ind-1,val));
    else
        return dp[ind][val] =  knapsack(ind-1,val);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>N>>W;
    v.resize(N);
    w.resize(N);
    for(int i=0 ; i<N ; i++)
        cin>>w[i]>>v[i];

    memset(dp,-1,sizeof(dp));
    
    for(int i=1e5 ; i>=0 ; i--)
        if(knapsack(N-1,i)<=W){
            cout<<i;
            break;
        }

    return 0;
}