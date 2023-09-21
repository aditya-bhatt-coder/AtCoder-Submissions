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

void solve(){
    string s; cin >> s;
    string test = "";
    int b1 = -1 , b2 = -1;

    for(int i=0 ; i<8 ; i++){
        if(s[i] == 'R'){
            test += 'R';
        }
        if(s[i] == 'K'){
            test += 'K';
        }
        if(s[i] == 'B'){
            if(b1 != -1){
                b2 = i % 2;
            }
            else{
                b1 = i % 2;
            }
        }
    }

    if(b1 != b2 and test == "RKR"){
        yes;
    }else{
        no;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}