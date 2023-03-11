// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char g[10][10];
    ll ans = 0;

    for(int i=0 ; i<9 ; i++){
        string s; cin>>s;
        for(int j=0 ; j<9 ; j++){
            g[i][j] = s[j];
        }
    }

    auto valid = [&](int x, int y){
        return x >= 0 and x < 9 and y >= 0 and y < 9 and g[x][y] == '#';
    };

    for(int x1=0 ; x1<9 ; x1++){
        for(int x2=0 ; x2<9 ; x2++){
            for(int y1=0 ; y1<9 ; y1++){
                for(int y2=0 ; y2<9 ; y2++){
                    if(x1 == x2 or y1 == y2) continue;
                    if(g[x1][y1] == '.' or g[x2][y2] == '.') continue;
                    if(g[x1][y2] == '#' and g[x2][y1] == '#'){
                        ans++;
                        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<'\n';
                    }
                }
            }
        }
    }

    cout<<ans/4;

    return 0;
}