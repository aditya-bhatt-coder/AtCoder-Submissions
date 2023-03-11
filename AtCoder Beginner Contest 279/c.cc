// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
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

    int r,c;
    cin>>r>>c;

    vector<vector<char>> s(c, vector<char>(r));
    vector<vector<char>> t(c, vector<char>(r));

    for(int i=0 ; i<r ; i++){
        string str; cin>>str;
        for(int j=0 ; j<c ; j++){
            s[j][i] = str[j];
        }
    }
    
    for(int i=0 ; i<r ; i++){
        string str; cin>>str;
        for(int j=0 ; j<c ; j++){
            t[j][i] = str[j];
        }
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s == t)
        cout<<"Yes\n";
    else
        cout<<"No\n";

    return 0;
}