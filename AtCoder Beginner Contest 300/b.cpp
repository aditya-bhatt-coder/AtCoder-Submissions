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

    int H, W;
    cin >> H >> W;
    vector<string> A(H), B(H);
    for (auto& x : A) cin >> x;
    for (auto& x : B) cin >> x;
    for (int s = 0; s < H; s++) {
        for (int t = 0; t < W; t++) {
        int ok = 1;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
            if (A[(i - s + H) % H][(j - t + W) % W] != B[i][j]) ok = 0;
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            exit(0);
        }
        }
    }
    cout << "No" << endl;

    return 0;
}