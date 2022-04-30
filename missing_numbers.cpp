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

    int n, temp; cin >> n;

    int ans = 0;

    vector<bool> v(n+1,false);

    rep(i, n-1)
    {
        cin >> temp;
        v[temp] = 1;
    }

    for(int i = 1; i<=n;i++)

        if(!v[i])
        {
            cout<<i;
            return 0;
        }

}