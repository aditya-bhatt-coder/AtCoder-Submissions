// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> dp(100002);
    dp[0] = 1;

    int n; cin >> n;
    vector<int> step(n);
    for(int &i : step){
        cin >> i;
        dp[i] = 1;
    }

    int m; cin >> m;
    vector<int> trap(m);
    for(int &i : trap){
        cin >> i;
        dp[i] = -1;
    }

    int target;
    cin >> target;

    for(int i=0 ; i<=target ; i++){
        if(dp[i] == -1){
            dp[i] = 0;
            continue;
        }
        for(auto st : step){
            if(i - st >= 0){
                dp[i] = max(dp[i], dp[i - st]);
            }
        }
    }

    if(dp[target] > 0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}