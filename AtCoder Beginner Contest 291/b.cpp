// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    vector<int> v(5*n);

    for(int i=0 ; i<5*n ; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    int sum = 0;

    for(int i=n ; i<4*n ; i++){
        sum += v[i];
    }

    double avg = sum / (3.0*n);

    cout<<fixed<<setprecision(7)<<avg;

    return 0;
}