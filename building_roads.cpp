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

vl v[100001];
bool visited[100001];

void dfs(int i)
{
    visited[i] = true;

    for(int j = 0; j < v[i].size() ; j ++)
    {
        if(!visited[v[i][j]])
            dfs(v[i][j]);
    }

}

int main()
{
    fast;
    int n, m; cin >> n >> m;
    int a, b;

    for(int i = 0 ; i < m ;i++)
    {
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }

    int connected = 0;

    vector<int> final;

    for(int i = 1 ; i <= n ; i++)
    {
        if(!visited[i])
        {
            dfs(i);
            connected++;
            final.pb(i);
        }
    }

    cout<<connected - 1<<endl;
    
    for(int i = 1 ; i < final.size() ; i++)
    {
        cout<<final[i-1]<<" "<<final[i]<<endl;
    }
}