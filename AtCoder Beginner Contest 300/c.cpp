// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

void solve(){
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<string> a;
    vector<int> ans(min(n,m));

    for(int i=0 ; i<n ; i++){
        string s; cin >> s;
        a.push_back(s);
    }

    for(int i=1 ; i<n - 1 ; i++){
        for(int j=1 ; j<m - 1 ; j++){
            if(a[i][j] == '#'){
                vector<int> v(4);
                for(int k=1 ; ; k++){
                    if(i-k >= 0 and j-k >= 0 and a[i-k][j-k] == '#')
                        v[0]++;
                    else
                        break;
                }
                for(int k=1 ; ; k++){
                    if(i-k >= 0 and j+k < m and a[i-k][j+k] == '#')
                        v[1]++;
                    else
                        break;
                }
                for(int k=1 ; ; k++){
                    if(i+k < n and j-k >= 0 and a[i+k][j-k] == '#')
                        v[2]++;
                    else
                        break;
                }
                for(int k=1 ; ; k++){
                    if(i+k < n and j+k < m and a[i+k][j+k] == '#')
                        v[3]++;
                    else
                        break;
                }

                int val = *min_element(v.begin(), v.end());
                if(val > 0){
                    ans[val - 1]++;
                }
            }
        }
    }

    print(ans);

    return 0;
}