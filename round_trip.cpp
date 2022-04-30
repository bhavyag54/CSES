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

const int maxN = 1e5+1;
vector<int> G[maxN];
vector<bool> vis(maxN, false);

bool solve(int start ,int par, int mainPar, vector<int>& ans)
{
    vis[start] = true;

    for(int i = 0; i<G[start].size(); i++)
    {
        if(G[start][i] == par)
            continue;
        
        if(G[start][i] == mainPar)
            return true;

        if(vis[G[start][i]])
            continue;

        if(solve(G[start][i], start, mainPar, ans))
        {
            ans.pb(G[start][i]);
            return true;
        }
    }

    return false;

}

int returnPoint = -1;

bool solve2(vector<int>& ans, int start, int par)
{
    vis[start] = true;

    // cout<<start<<endl;

    for(int i = 0; i<G[start].size(); i++)
    {

        if(returnPoint > -1)
            return false;

        if(G[start][i] == par)
            continue;

        // cout<<G[start][i]<<" "<<vis[G[start][i]]<<endl;

        if(vis[G[start][i]])
        {
            returnPoint = G[start][i];
            // cout<<"YES : "<<returnPoint<<endl;
            return true;
        }

        if(solve2(ans, G[start][i], start))
        {
            // cout<<"ans: "<<endl;
            // cout<<G[start][i]<<" "<<(G[start][i] == returnPoint)<<endl;
        
            if(returnPoint == G[start][i])
                return false;
            else
            {
                ans.pb(G[start][i]);
                return true;
            }
        }
    }

    return false;

}


int main()
{
    fast;
    
    int n, m;
    cin >> n >> m;

    int a, b;
    
    int start = 1;

    set<int> se;

    for(int i = 0; i< m;i++)
    {
        cin >> a >> b;
        G[a].pb(b);
        G[b].pb(a);

        se.insert(a);
    }

    vector<int> ans;

    set<int>::iterator i = se.begin();

    while( i != se.end() and returnPoint==-1)
    {
        bool bo = solve2(ans, *i, -1);
        i++;
    }
    
    // cout<<ans.size()<<endl;

    if(ans.size())
    {
        reverse(all(ans));
      
        cout<<ans.size()+2<<endl;
        cout<<returnPoint<<" ";
        for(auto i: ans)
            cout<<i<<" ";

        cout<<returnPoint<<endl;
        // cout<<i<<endl;
        return 0;
    }

    cout<<"IMPOSSIBLE"<<endl;

}

