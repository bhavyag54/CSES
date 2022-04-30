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
#define repd(i, n) for(int i = n-1; i>=0;i--)


int main()
{
    fast;
    int n; cin >> n;

    ll h[n];

    rep(i, n)
        cin >> h[i];

    stack<ll> s;

    vector<ll> area(n, 0);

    ll m = 0;

    rep(i, n)
    {
        while(!s.empty() and h[s.top()] >= h[i])
            s.pop();

        ll width = i - (s.size()?s.top():-1);

        area[i] += width * h[i];

        s.push(i);
    }

    while(!s.empty())
        s.pop();

    repd(i, n)
    {
        while(s.size() and h[s.top()] >= h[i])
            s.pop();
        
        int width = (s.size() ? s.top() : n) - i;
        area[i] += (width - 1) * h[i];

        m = max(area[i], m);

        s.push(i);
    }

    // for(auto i: area)
    //     cout<<i<<" ";
    // cout<<endl;

    cout<<m<<endl;
    


}