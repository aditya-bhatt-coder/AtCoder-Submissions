//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    string o = "atcoder";
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0 ; i<7 ; i++){
        size_t found = s.find(o[i]);
        while(found!=i){
            swap(s[found],s[found-1]);
            ans++;
            found = s.find(o[i]);
        }
    }

    cout<<ans;

    return 0;
}