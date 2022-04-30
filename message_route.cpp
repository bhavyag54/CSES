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

vector<int> v[100001];
int dist[100001];
int par[100001];
bool vis[100001];

int n, m;

bool bfs()
{
    queue<int> q;
    dist[1] = 1;

    vis[1] = 1;
    q.push(1);

    while(!q.empty())
    {
        int node = q.front(); q.pop();

        if(node == n)
            return true;
        
        for(int u: v[node])
        {
            if(vis[u] == false)
            {
                dist[u] = dist[node] + 1;
                vis[u] = true;
                par[u] = node;
                q.push(u);
            }

        }
        
    }

    return false;

}


int main()
{
    cin>>n>>m;
    int a, b;

    for(int i = 0 ; i < m;i++)
    {
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }

    if(bfs())
    {
        cout<<dist[n]<<endl;

        int path = n;
        vector<int> res;

        while(path != 0) res.pb(path), path = par[path];

        reverse(all(res));

        for(auto i: res)
            cout<<i<<" ";
    }
    else
        cout<<"IMPOSSIBLE";

   
}