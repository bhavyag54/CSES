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
#define pii pair<int, int>
#define vpll vector<pll>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define f first
#define s second


int main()
{
    fast;
    int n, m;
    cin>>n>>m;

    // cout<<n<<m;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    string stepDir = "URDL";
   

    vector<vector<char>> A(n+1, vector<char>(m+1));
    vector<vector<bool>> vis(n+1, vector<bool>(m+1, false));
    int prevStep[n+1][m+1];

    queue<pii> q;

    pii begin, end;

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < m ; j++)
        {
            cin >> A[i][j];
            // cout<<A[i][j];

            if(A[i][j] == 'A')
                begin = mp(i, j);

            else if(A[i][j] == 'B')
                end = mp(i, j);
        }
    
    }

    // for(auto i: A)
    // {
    //     for(auto j: i)
    //         cout<<j;
    //     cout<<endl;
    // }


    q.push(begin);
    vis[begin.f][begin.s] = true;

    while(!q.empty())
    {
        pii u = q.front(); q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            pii v = mp(u.f + dx[i], u.s + dy[i]);

            if(v.f < 0 || v.f >=n || v.s < 0 || v.s >= m) continue;

            if(A[v.f][v.s] == '#') continue;
            if(vis[v.f][v.s]) continue;

            vis[v.f][v.s] = true;
            prevStep[v.f][v.s] = i;
            q.push(v);
        }
    }

    if(vis[end.f][end.s])
    {
        cout<<"YES"<<endl;
        vector<int> steps;

        while( end != begin )
        {
            int p = prevStep[end.f][end.s];
            steps.pb(p);

            end = mp(end.f - dx[p], end.s - dy[p]);
        }

        reverse(steps.begin(), steps.end());

        cout<< steps.size() << endl;

        for(auto c: steps)
            cout << stepDir[c];
        cout<<endl;

    }
    else
        cout << "NO" << endl;

    return 0;

}