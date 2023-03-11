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

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for(int &i : a)
        cin>>i;

    sort(a.begin(), a.end());

    int ctr = 0;
    int i = 0;
    while(i<n and k--){
        if(a[i] == ctr){
            while(i<n and a[i] == ctr)i++;
        }
        else{
            break;
        }
        ctr++;
    }
    cout<<ctr;

    return 0;
}