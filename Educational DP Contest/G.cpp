//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
using namespace std;

vector<int> dp(100001,0);
vector<bool> visited(100001,false);
vector<vector<int>> Alist(100001,vector<int>(0));

void dfs(int node){
    visited[node] = true;
    dp[node] = 0;

    for(int nbr : Alist[node]){
        if(!visited[nbr])
            dfs(nbr);
        dp[node] = max(dp[node], 1 + dp[nbr]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int v,e;
    cin>>v>>e;
    for(int i=0 ; i<e ; i++){
        int s,d;
        cin>>s>>d;
        Alist[s].push_back(d);
    }

    for(int i=1 ; i<=v ; i++){
        if(!visited[i])
            dfs(i);
    }

    cout<<*max_element(dp.begin()+1,dp.end());

    return 0;
}