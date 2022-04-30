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
#define rep(i, n) for(int i = 0; i<n;i++)
#define repd(i, n) for(int i = n-1; i<=0;i--)


int main()
{
    fast;

    ll n;
    cin >> n;

    ll temp = (n*(n+1)/2);
    // cout<<temp<<endl;

    if(!(temp&1))
    {
        yes
        
        if(!(n&1))
        {
            cout<<n/2<<endl;
            for(int i = 1; i<=n/2;i+=2)
            {
                cout<<i<<" "<<(n-i+1)<<" ";
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(int i = 2; i<=n/2;i+=2)
            {
                cout<<i<<" "<<(n-i+1)<<" ";
            }
        }
        else
        {
            cout<<n/2 + 1<<endl;
            cout<<1<<" "<<2<<" ";
            for(int i = 4; i<(n/2 + 3);i+=2)
            {
                cout<<i<<" "<<(n-i+4)<<" ";
            }

            cout<<endl;
            cout<<n/2<<endl;
            cout<<3<<" ";
            for(int i = 5; i<(n/2 + 3);i+=2)
            {
                cout<<i<<" "<<(n-i+4)<<" ";
            }
        }
    }
    else
        no

}