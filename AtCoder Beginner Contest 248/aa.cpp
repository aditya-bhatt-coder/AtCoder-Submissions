#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,d,e,f,x;
    cin>>b>>a>>c>>e>>d>>f>>x;

    int disT = a*b*(x/(b+c));
    int remT = x%(b+c);
    if(remT<=b)
        disT += remT*a;
    else
        disT += a*b;
    // cout<<disT;

    int disA = d*e*(x/(e+f));
    int remA = x%(e+f);
    if(remA<=e)
        disA += remA*d;
    else
        disA += d*e;
    // cout<<disA;

    if(disT>disA)
        cout<<"Takahashi";
    else if(disA>disT)
        cout<<"Aoki";
    else
        cout<<"Draw";

    return 0;
}