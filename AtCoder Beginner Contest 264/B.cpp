//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    int r,c; cin>>r>>c;
    if(r==1 or r==15 or c==0 or c==15)
        cout<<"black";
    
    else if(r==2 or r==14 or c==2 or c==14)
        cout<<"white";
    else if(r==3 or r==13 or c==3 or c==13)
        cout<<"black";
    
    else if(r==4 or r==12 or c==4 or c==12)
        cout<<"white";
    else if(r==5 or r==11 or c==5 or c==11)
        cout<<"black";

    else if(r==6 or r==10 or c==6 or c==10)
        cout<<"white";
    else if(r==7 or r==9 or c==7 or c==9)
        cout<<"black";

    else cout<<"white";

    return 0;
}