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

const int maxN = 1e5 + 1;

bool possible, vis[maxN], team[maxN];
vector<int> v[maxN];


void dfs(int u, int p = 0)
{
    for(int i: v[u])
    {
        if(i != p)
        {
            if(!vis[i])
            {
                team[i] = !team[u];
                vis[i] = true;
                dfs(i, u);
            }
            else
                if(team[i] == team[u])
                    possible = false;
        }
    }
}

int main()
{
    fast;
    
    int n, m;
    cin >> n >> m;

    int a, b;

    for(int i = 0; i< m;i++)
    {
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }

    possible = true;
    for(int i = 1; i<=n; i++)
    {
        if(!vis[i])
        {
            vis[i] = true;
            dfs(i);
        }
    }

    if(!possible)
        cout<<("IMPOSSIBLE")<<endl;
    else
        for(int i = 1; i <= n; i++)
            cout<<(!team[i]?1:2)<<" ";

}