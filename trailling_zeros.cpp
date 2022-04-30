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
    cin>>n;
    ll acc=0;
    ll k=log(n)/log(5);
    cout<<k<<endl;
    ll sum=0;
    for(ll i=1;i<=k;i++)
    {
        sum+=floor(n/pow(5,i));
    }
    cout<<sum<<"\n";
    return 0;
}