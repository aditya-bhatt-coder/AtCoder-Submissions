// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        ll n,num;
        cin>>n;
        num = n;
        ll c=2;
        ll p=-1, q=-1;

        while(n>1)
        {
            if(n%c==0){
                ll csq = c * c;
                if(num%(csq) == 0){
                    p = c;
                    q = num/(csq);
                    break;
                }
                else{
                    q = c;
                    p = sqrt(num/c);
                    break;
                }
                n/=c;
            }
            else c++;
        }
        cout<<p<<" "<<q<<'\n';
    }

    return 0;
}