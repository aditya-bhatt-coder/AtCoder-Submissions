#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b, k;
    cin>>a>>b>>k;
    ll cnt = 0;
    while(1){
        if(a>=b){
            break;
        }
        a*=k;
        cnt++;
    } 
    cout<<cnt<<endl;

    return 0;
}