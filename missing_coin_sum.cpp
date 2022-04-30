#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define mod 1000000007
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vl vector<ll>
#define vi vector<int>
#define vll vector<ll,ll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define pb push_back
#define all(v) v.begin(), v.end()

const ll mn = 2e5+5;
ll dp[mn];

int main()
{
    fast;
    int n; cin>>n;

    vl coins(n+1, 0);

    for(int i = 1 ; i <= n;i++)
       cin>>coins[i];

    sort(all(coins));

    dp[0] = 1;

    for(int i = 1 ; i <= n ; i++ )
    {
        if(dp[i-1] < coins[i]) return cout<<dp[i-1], 0;
        dp[i] = (dp[i-1] + coins[i]);
    }

    cout<<dp[n];

}