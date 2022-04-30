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
    
    int n, m, k;
    cin >> n >> m >> k;

    int dea[n];
    int as[m];

    for( int i = 0 ; i < n ; i++ )
        cin>>dea[i];
    
    for( int i = 0 ; i < m ; i++ )
        cin>>as[i];
    
    sort(dea, dea+n);
    sort(as, as + m);

    int count = 0;

    int i = 0, j = 0;
    while( i < n and j < m)
    {
        if(abs(dea[i] - as[j]) <= k)
        {
            ++i, ++j;
            count++;
        }
        else
        {
            if(dea[i] - as[j] > k)
                ++j;

            else
                ++i;
        }
    }

    cout<<count<<endl;

}