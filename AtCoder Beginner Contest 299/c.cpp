// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vii vector<vi>
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
    int n; cin >> n;
    string s; cin >> s;
    int ans = -1;

    for(int i=0 ; i<n ; i++){
        if(s[i] == 'o'){
            int j = i;
            for(j=i ; j<n ; j++){
                if(s[j] == '-'){
                    j--;
                    break;
                }
            }
            if(j == n){
                if(i - 1 >= 0 and s[i - 1] == '-'){
                    ans = max(ans, j - i);
                }
            }
            else{
                ans = max(ans, j - i + 1);
            }
            i = j;
        }
    }

    cout << ans ;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}