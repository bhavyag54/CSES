#include<bits/stdc++.h>
using namespace std;

// #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
    int n;
    cin >> n;

    vector<long> v(n);

    long sum = 0, ans = INT_MAX;
    rep(i,n) 
    {
        cin >> v[i];
        sum += v[i];
    }

    for(int i = 0; i < (1<<n) ; i++)
    {
        long s = 0;

        for(int j = 0; j<n;j++)
        
            if(i & (1<<j)) s += v[j];

        ans = min(ans, abs(sum-s-s));
    }

    cout<<ans;
}