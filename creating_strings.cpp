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

set<string> se;

void recur(string s, int l, int r)
{
    if(l == r)
        se.insert(s);
    else
    {
        for(int i = l; i<=r; i++)
        {
            swap(s[l], s[i]);
            recur(s, l+1, r);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    fast;

    string s;
    cin >> s;

    vector<int> v(26, 0);

    ll fact[9] = {1,1,2,6,24,120,720,5040,40320};

    for(int i = 0; i<s.length(); i++)
    {
        int t = s[i] - 'a';
        v[t]++;
    }


    ll ans = fact[s.length()];

    for(auto i: v)
    {
        ans /= fact[i];
    }

    cout<<ans<<endl;

    recur(s, 0, s.length()-1);

    for(auto i: se)
        cout<<i<<endl;

}