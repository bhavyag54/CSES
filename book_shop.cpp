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

    int n,x;
    cin>>n>>x;

    int price[n], pages[n];

    for(int i = 0 ; i < n ; i++ )
        cin>>price[i];
    
    for(int i = 0 ; i < n ; i++ )
        cin>>pages[i];
        
    vector<vector<int>> dp(n+1, vector<int>(x+1, 0));

    for(ll i = 1; i <= n; i++)
    {
        for(ll j = 0; j<=x ; j++)
        {
            dp[i][j] = dp[i-1][j];

            if(j >= price[i-1])
            {
                dp[i][j] = max(dp[i][j], pages[i-1] + dp[i-1][j - price[i-1]]);
            }
        }
    }

    cout << dp[n][x] << endl;

    return 0;

}