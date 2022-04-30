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
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> m;

    for(int i = 0; i<n ;i++)
        cin >> v[i];

    int size = 0;
    int ans = 0;
    int start = 1;

    for(int i = 0; i < n ; i++)
    {
        if(!m[v[i]])
        {
            size++;
            m[v[i]] = i+1;
        }
        else
        {
            size = size - m[v[i]] + start;
            int temp = m[v[i]];
            for(int j = start-1; j <= m[v[i]]-1; j++)
                m[v[j]] = 0;

            start = temp + 1;
            m[v[i]] = i+1;
        }

        ans = max(ans, size);
    }

    ans = max(ans, size);
    cout<<ans;


}