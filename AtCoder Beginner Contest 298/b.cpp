// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

vvi a, b, t;
int n; 

bool verify(){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(a[i][j] == 1){
                if(b[i][j] != 1){
                    return false;
                }
            }
        }
    }
    return true;
}

void solve(){
    cin >> n;
    a.resize(n, vi(n));
    b.resize(n, vi(n));
    t.resize(n, vi(n));

    for(auto &v : a)
        input(v);

    for(auto &v : b)
        input(v);

    for(int lol=0 ; lol<4 ; lol++){
        if(verify()){
            yes; return;
        }
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                t[n - j - 1][i] = a[i][j];
            }
        }
        a = t;
    }

    no;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}