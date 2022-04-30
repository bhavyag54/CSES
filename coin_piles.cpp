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

map<string, bool> m;

bool recur(int a, int b)
{   
    ostringstream s1, s2;
    s1 << "" << a << "" << b;
    s2 << "" << b << "" << a;

    if(m[s1.str()] or m[s2.str()])
    {
        return 1;
    }


    if(a < 0 or b < 0)
        return false;

    m[s1.str()] = recur(a-1, b-2) or recur(a-2, b-1);
    m[s2.str()] = m[s1.str()];

    return m[s1.str()];

}

int main()
{
    fast;
    int t, a, b;
    cin >> t;

    m["00"] = true;

    while(t--)
    {
        cin >> a >> b;

        if(a > 2*b or b > 2*a)
        {
            no
            continue;
        }
        else
        {
            a %= 3;
            b %= 3;
        }

        // cout<<a<<" "<<b<<endl;

        if(recur(a,b)) yes
        else no
    }

}