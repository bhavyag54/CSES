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
#define sz(x) (int)(x).size()


int main()
{
    fast;
    int n;
    cin >> n;

    vl x;
    int z;
    for(int i = 0; i<n; i++)
    {
        cin >> z;
        int lo = 0, hi = sz(x);

        while(lo < hi)
        {
            int mid = (lo + hi) / 2;
            if(x[mid] > z) hi = mid;
            else lo = mid + 1;
        }

        if(lo == sz(x)) x.pb(z);

        else x[lo] = z;
    }
    

    cout<<sz(x)<<endl;

}