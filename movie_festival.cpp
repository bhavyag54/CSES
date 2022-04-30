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
#define mp(a,b) make_pair(a,b)
#define all(v) v.begin(), v.end()

int main()
{
    fast;
    int n;cin >> n;

    vpll v;

    for(int i = 0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        v.pb(mp(a,b));
    }

    sort(all(v), [&v](pll a, pll b){

        return b.second > a.second;

    });

    int current_time = v[0].second;

    int count = 1;

    for(auto i: v)
    {
        if(i.first >= current_time)
        {
            count++;
            current_time = i.second;
        }
    }

    cout<<count<<endl;

}