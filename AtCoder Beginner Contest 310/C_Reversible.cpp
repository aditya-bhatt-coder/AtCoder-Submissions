// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "Yes"
#define no cout << "No"
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

bool isPal(string &s){
    int n = s.size();
    for(int i=0 ; i<n>>1; i++){
        if(s[i] != s[n - 1 - i]){
            return false;
        }
    }
    return true;
}

void solve(){
    int n; cin >> n;
    set<string> s, s2;
    for(int i=0 ; i<n ; i++){
        string str; cin >> str;
        if(isPal(str)){
            s2.insert(str);
            continue;
        }
        s.insert(str);
        reverse(all(str));
        s.insert(str);
    }

    cout << s.size()/2 + s2.size();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}