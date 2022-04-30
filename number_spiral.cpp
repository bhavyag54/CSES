#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define mod 1000000007
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vl vector<ll>
#define vll vector<ll,ll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define pb push_back
#define all(v) v.begin(), v.end()

int main()
{
    fast;

    int t;

    cin >> t;

    while(t--)
    {
        ll x, y;
        cin >> x >> y;

        ll ans = 0;

        if(x >= y)
        {
            ll start;

            if(x == 1 and y == 1)
            {
                cout<<1<<endl;
                continue;
            }

            bool b = x&1;

            if(!b)
            {
                start = x*x;
                ans = start - y + 1;
            }    
                
            else
            {
                start = (x-1)*(x-1) + 1;
                ans = start + y - 1;
            }

            
        }
        else
        {
            ll start;

            bool b = y&1;

            if(!b)
            {
                start = (y-1)*(y-1) + 1;
                ans = start + x - 1;

            }    
            else
            {
                start = y*y;
                ans = start - x + 1;
            }   
                

            
        }

        cout<<ans<<endl;



    }

}