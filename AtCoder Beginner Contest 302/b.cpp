// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define input(v) for(auto &i : v) cin >> i
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
    int r, c; cin >> r >> c;
    vector<string> v(r);

    for(int i=0 ; i<r ; i++)
        cin >> v[i];

    // snuke
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(v[i][j] == 's'){
                if(i - 4 >= 0){
                    if(v[i][j] == 's' and v[i - 1][j] == 'n' and v[i - 2][j] == 'u' and v[i - 3][j] == 'k' and v[i - 4][j] == 'e'){
                        cout << i + 1 << " " << j + 1 << "\n";
                        cout << i - 1 + 1 << " " << j + 1 << "\n";
                        cout << i - 2 + 1 << " " << j + 1 << "\n";
                        cout << i - 3 + 1 << " " << j + 1 << "\n";
                        cout << i - 4 + 1 << " " << j + 1 << "\n";
                        return;
                    }
                    if(j - 4 >= 0){
                        if(v[i][j] == 's' and v[i - 1][j - 1] == 'n' and v[i - 2][j - 2] == 'u' and v[i - 3][j - 3] == 'k' and v[i - 4][j - 4] == 'e'){
                            cout << i + 1 << " " << j + 1 << "\n";
                            cout << i - 1 + 1 << " " << j - 1 + 1 << "\n";
                            cout << i - 2 + 1 << " " << j - 2 + 1 << "\n";
                            cout << i - 3 + 1 << " " << j - 3 + 1 << "\n";
                            cout << i - 4 + 1 << " " << j - 4 + 1 << "\n";
                            return;
                        }
                    }
                    if(j + 4 < c){
                        if(v[i][j] == 's' and v[i - 1][j + 1] == 'n' and v[i - 2][j + 2] == 'u' and v[i - 3][j + 3] == 'k' and v[i - 4][j + 4] == 'e'){
                            cout << i + 1 << " " << j + 1 << "\n";
                            cout << i - 1 + 1 << " " << j + 1 + 1 << "\n";
                            cout << i - 2 + 1 << " " << j + 2 + 1 << "\n";
                            cout << i - 3 + 1 << " " << j + 3 + 1 << "\n";
                            cout << i - 4 + 1 << " " << j + 4 + 1 << "\n";
                            return;
                        }
                    }
                }
                if(j - 4 >= 0){
                    if(v[i][j] == 's' and v[i][j - 1] == 'n' and v[i][j - 2] == 'u' and v[i][j - 3] == 'k' and v[i][j - 4] == 'e'){
                        cout << i + 1 << " " << j + 1 << "\n";
                        cout << i + 1 << " " << j - 1 + 1 << "\n";
                        cout << i + 1 << " " << j - 2 + 1 << "\n";
                        cout << i + 1 << " " << j - 3 + 1 << "\n";
                        cout << i + 1 << " " << j - 4 + 1 << "\n";
                        return;
                    }
                }
                if(i + 4 < r){
                    if(v[i][j] == 's' and v[i + 1][j] == 'n' and v[i + 2][j] == 'u' and v[i + 3][j] == 'k' and v[i + 4][j] == 'e'){
                        cout << i + 1 << " " << j + 1 << "\n";
                        cout << i + 1 + 1 << " " << j + 1 << "\n";
                        cout << i + 2 + 1 << " " << j + 1 << "\n";
                        cout << i + 3 + 1 << " " << j + 1 << "\n";
                        cout << i + 4 + 1 << " " << j + 1 << "\n";
                        return;
                    }
                    if(j - 4 >= 0){
                        if(v[i][j] == 's' and v[i + 1][j - 1] == 'n' and v[i + 2][j - 2] == 'u' and v[i + 3][j - 3] == 'k' and v[i + 4][j - 4] == 'e'){
                            cout << i + 1 << " " << j + 1 << "\n";
                            cout << i + 1 + 1 << " " << j - 1 + 1 << "\n";
                            cout << i + 2 + 1 << " " << j - 2 + 1 << "\n";
                            cout << i + 3 + 1 << " " << j - 3 + 1 << "\n";
                            cout << i + 4 + 1 << " " << j - 4 + 1 << "\n";
                            return;
                        }
                    }
                    if(j + 4 < c){
                        if(v[i][j] == 's' and v[i + 1][j + 1] == 'n' and v[i + 2][j + 2] == 'u' and v[i + 3][j + 3] == 'k' and v[i + 4][j + 4] == 'e'){
                            cout << i + 1 << " " << j + 1 << "\n";
                            cout << i + 1 + 1 << " " << j + 1 + 1 << "\n";
                            cout << i + 2 + 1 << " " << j + 2 + 1 << "\n";
                            cout << i + 3 + 1 << " " << j + 3 + 1 << "\n";
                            cout << i + 4 + 1 << " " << j + 4 + 1 << "\n";
                            return;
                        }
                    }
                }
                if(j + 4 < c){
                    if(v[i][j] == 's' and v[i][j + 1] == 'n' and v[i][j + 2] == 'u' and v[i][j + 3] == 'k' and v[i][j + 4] == 'e'){
                        cout << i + 1 << " " << j + 1 << "\n";
                        cout << i + 1 << " " << j + 1 + 1 << "\n";
                        cout << i + 1 << " " << j + 2 + 1 << "\n";
                        cout << i + 1 << " " << j + 3 + 1 << "\n";
                        cout << i + 1 << " " << j + 4 + 1 << "\n";
                        return;
                    }
                }
            }
        }
    }
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