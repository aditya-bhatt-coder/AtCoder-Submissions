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

    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
	    
        bool op = false, zp = false, tp = false;
	    std::set<int> s;
	    
        std::vector<int> v(n);
	    for(int &i : v){
	        cin>>i;
	        s.insert(i);
	        if(i == 1)
	            op = true;
	        if(i == 0)
	            zp = true;
	        if(i == 2)
	            tp = true;
	    }
	    
	    if(s.size() == 1 or n == 1){
	        cout<<"YES\n";
	        continue;
	    }
	    
	    if(zp == false and op == false){
	        cout<<"YES\n";
	        continue;
	    }
	    
	    if(zp == true and op == true){
	        cout<<"NO\n";
	        continue;
	    }
	    
	    if(zp == true){
	        cout<<"YES\n";
	        continue;
	    }
	    
	    // only one present
	    if(tp == true){
	        cout<<"NO\n";
	        continue;
	    }
	    
	    sort(v.begin(),v.end());
	    bool ans = true;
	    
	    for(int i=0 ; i<n-1 ; i++){
	        if(v[i]>1 and v[i+1] == v[i]+1){
	            ans = false;
	            break;
	        }
	    }
	    
	    ans ? cout<<"YES\n" : cout<<"NO\n";
    }

    return 0;
}