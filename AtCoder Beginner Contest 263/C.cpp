//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ans;

void dfs(int idx){
    if(ans.size()==n){
        for(int i=0 ; i<n ; i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    if(idx>m)
        return;
    for(int i=idx ; i<=m ; i++){
        ans.push_back(i);
        dfs(i+1);
        ans.pop_back();
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1 ; i<=m-n+1 ; i++){
        ans.push_back(i);
        dfs(i+1);
        ans.pop_back();
    }

    return 0;
}