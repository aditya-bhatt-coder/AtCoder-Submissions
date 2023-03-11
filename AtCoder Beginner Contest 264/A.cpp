//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "atcoder";
    int a,b; cin>>a>>b;

    string ans = s.substr(a-1,b-a+1);
    cout<<ans;


    return 0;
}