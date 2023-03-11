// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
}

int main()
{
    int n; cin>>n;

    vector<int> a(n),t;
    for(int &x : a) cin>>x;

    if(n == 2){
        reverse(a.begin(),a.end());
        print(a);
        exit(0);
    }

    int p = -1;

    for(int i=n-1 ; i>0 ; i--){
        if( a[i - 1] > a[i]){
            p = i - 1;
            for(int j=i-1 ; j<n ; j++){
                t.push_back(a[j]);
            }
            break;
        }
    }

    // print(t);

    for(int i=0 ; i<p ; i++){
        cout<<a[i]<<" ";
    }
    sort(t.begin(),t.end());
    int ok = -1;
    for(int i=0 ; i<t.size()-1 ; i++){
        if(t[i+1] == a[p])
            ok = t[i];
    }

    cout<<ok<<" ";

    for(int i=t.size()-1 ; i>=0 ; i--){
        if(t[i] == ok)
            continue;
        cout<<t[i]<<" ";
    }

    cout<<'\n';

    return 0;
}