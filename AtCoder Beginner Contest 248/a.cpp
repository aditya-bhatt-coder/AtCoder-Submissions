#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    unordered_map<char,int> m;
    for(auto a : s)
        m[a]++;
    for(int i=0 ; i<=9 ; i++)
        if(m[to_string(i)[0]]!=1)
            cout<<i;

    return 0;
}