// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define inp(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    int x1, x2, x3, y1, y2, y3;
    
    cin >> x1 >> y1;
    vector<string> v1(x1);
    inp(v1);

    cin >> x2 >> y2;
    vector<string> v2(x2);
    inp(v2);
    
    cin >> x3 >> y3;
    vector<string> v3(x3), ans;
    inp(v3);

    for(int i=0 ; i<x3 ; i++){
        string str = "";
        for(int j=0 ; j<y3 ; j++){
            str += '.';
        }
        ans.pb(str);
    }

    for(int i3=0 ; i3<x3 ; i3++){
        for(int j3=0 ; j3<y3 ; j3++){
            // matching grid 1
            bool ok1 = true;
            for(int i1=0 ; i1<x1 ; i1++){
                for(int j1=0 ; j1<y1 ; j1++){
                    if(i1 + i3 >= x3 or j1 + j3 >= y3)
                        break;
                    if(v3[i3 + i1][j3 + j1] == '.' and v1[i1][j1] == '#'){
                        ok1 = false;
                        break;
                    }
                    // cout << i1 + i3 << " " <<j1+j3<<"\n";
                }
            }
            if(ok1){
                for(int i1=0 ; i1<x1 ; i1++){
                    for(int j1=0 ; j1<y1 ; j1++){
                        if(i1 + i3 >= x3 or j1 + j3 >= y3)
                            break;
                        ans[i3 + i1][j3 + j1] = v1[i1][j1];
                    }
                }
            }

            // matching grid 2
            bool ok2 = true;
            for(int i2=0 ; i2<x2 ; i2++){
                for(int j2=0 ; j2<y2 ; j2++){
                    if(i2 + i3 >= x3 or j2 + j3 >= y3)
                        break;
                    if(v3[i3 + i2][j3 + j2] == '.' and v1[i2][j2] == '#'){
                        ok2 = false;
                        break;
                    }
                    // cout << i1 + i3 << " " <<j1+j3<<"\n";
                }
            }
            if(ok2){
                for(int i2=0 ; i2<x2 ; i2++){
                    for(int j2=0 ; j2<y2 ; j2++){
                        if(i2 + i3 >= x3 or j2 + j3 >= y3)
                            break;
                        ans[i3 + i2][j3 + j2] = v1[i2][j2];
                    }
                }
            }
        }
    }

    if(v3 == ans){
        yes;
    } else{
        no;
    }

    // for(auto it : ans){
    //     cout << it << "\n";
    // }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int tc;
    // cin>>tc;
    // while(tc--){
        solve();
    // }

    return 0;
}