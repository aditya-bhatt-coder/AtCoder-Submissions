#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin>>s;
    bool up=false, low=false, dis=true;
    map<char,int> m;

    for(int i=0 ; i<s.length() ; i++){
        if(m[s[i]]>0){
            dis=false;break;
        }
        else{
            m[s[i]]++;
            if(isupper(s[i]))
                up=true;
            if(islower(s[i]))
                low=true;
        }
    }
    if(up && low && dis)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}