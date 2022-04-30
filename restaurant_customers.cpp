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
#define pint pair<int, int>
#define vpll vector<pll>
#define pb push_back
#define all(v) v.begin(), v.end()

int main()
{
    fast;
    int n; cin>>n;

    vpll v(n);

    for(int i = 0 ; i < n ; i++ )
    {
        int l , r;
        cin >> l >> r;
        v.pb(make_pair(l, 1));
        v.pb(make_pair(r, -1));
    }
    
    sort(all(v));

    int ans = 0;
    int sum = 0;

    for(auto i : v)
    {
        sum += i.second;
        ans = max(ans, sum);
    }

    cout<<ans<<endl;

}