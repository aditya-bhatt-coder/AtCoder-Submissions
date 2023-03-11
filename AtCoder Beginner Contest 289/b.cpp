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

        int n, m; cin >> n >> m;
        vector<int> a(m);

        for(int &i : a){
            cin >> i;
        }

        int ptr = 0;
        set<int> s;
        for(int i=1 ; i<=n ; i++){
            if(ptr < m and a[ptr] == i){
                s.insert(-i);
                s.insert(-i-1);
                ptr++;
            }
            else{
                if(s.size()){
                    for(auto it : s){
                        cout<<-it<<" ";
                    }
                    s.clear();
                }
                else{
                    cout<<i<<" ";
                }
            }
        }

    return 0;
}