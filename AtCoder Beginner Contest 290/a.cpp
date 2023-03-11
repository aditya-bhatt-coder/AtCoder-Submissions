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

    int n, m;
    cin >> n >> m;

    vector<int> a(n+1);
    int sum = 0;

    for(int i=1 ; i<=n ; i++)
        cin >> a[i];

    for(int i=0 ; i<m ; i++){
        int idx;
        cin >> idx;
        sum += a[idx];
    }

    cout<<sum;

    return 0;
}