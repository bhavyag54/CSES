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
    
    vector<string> in = {"0","1"};

    vector<string> ans;

    for(int i = 2; i<=n;i++)
    {
        int lop = pow(2,i);
        int interval = (int)(lop/2);
        for(int j = 1; j<=lop; j++)
        {
            if(j <= interval)
            {
                ans.pb("0"+in[j-1]);
            }
            else
            {
                ans.pb(("1"+in[lop - j]));
            }
        }

        in.clear();
        in = ans;
        ans.clear();

    }

    for(auto i: in)
        cout<<i<<endl;
    
    
}