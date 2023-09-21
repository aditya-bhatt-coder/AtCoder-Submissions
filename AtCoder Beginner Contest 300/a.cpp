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

    int n, a, b;
    cin >> n >> a >> b;

    vector<int> v(n);
    for(int &i : v)
        cin >> i;

    for(int i=0 ; i<n ; i++){
        if(v[i] == a + b){
            cout << i + 1;
        }
    }

    return 0;
}