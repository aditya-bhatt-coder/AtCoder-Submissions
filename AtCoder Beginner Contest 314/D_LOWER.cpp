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

void solve(){
    int n, q;
    string s;

    cin >> n >> s >> q;
    vi q0(q), q1(q);
    vector<char> q2(q);

    for(int i=0 ; i<q ; i++){
        cin >> q0[i] >> q1[i] >> q2[i];
        q1[i]--;
        if(q0[i] == 1){
            s[q1[i]] = q2[i];
        }
    }

    set<int> st;

    for(int i=q-1 ; i>=0 ; i--){
        if(q0[i] == 1){
            st.insert(q1[i]);
        }
        else{
            if(q0[i] == 2){
                for(int j=0 ; j<n ; j++){
                    if(st.find(j) == st.end()){
                        s[j] = tolower(s[j]);
                    }
                }
            }
            else{
                for(int j=0 ; j<n ; j++){
                    if(st.find(j) == st.end()){
                        s[j] = toupper(s[j]);
                    }
                }
            }
            break;
        }
    }

    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}