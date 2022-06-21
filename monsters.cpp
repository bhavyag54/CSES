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
#define all(v) v.begin(), v.end()
#define mn 1005
const int maxN = 1001;

int N, M;
queue<pii> q;
int paths[mn][mn];
pii from[mn][mn];
int oo = INT_MAX;

pii A;
string ans = "";
bool possible = false;


bool mora = false;

void check(pii origin, pii dest)
{
    int pl = paths[origin.first][origin.second];

    if(pl+1 < paths[dest.first][dest.second])
    {
        paths[dest.first][dest.second] = pl+1;
        q.push(dest);
        from[dest.first][dest.second] = origin;
    }
}

void retrace(pii node)
{
    pii origin = from[node.first][node.second];

    if(origin == pii(0,0)) return;

    // cout<<origin.first<<" "<<origin.second<<endl;

    if(origin.first == node.first+1) ans.pb('U'); 
    if(origin.first == node.first-1) ans.pb('D'); 
    if(origin.second == node.second+1) ans.pb('L'); 
    if(origin.second == node.second-1) ans.pb('R');

    retrace(origin); 
}

void bfs()
{
    while(!q.empty())
    {
        pii loc = q.front(), next; q.pop();
        
        next = loc;next.first++;
        check(loc, next);
        
        next = loc; next.first--;
        check(loc, next);
        
        next = loc; next.second++;
        check(loc, next);

        next = loc; next.second--;
        check(loc, next);

        if(mora and 
            (loc.first == 1 or 
            loc.second == 1 or 
            loc.first == N or 
            loc.second == M
        ))
        {
            yes
            cout<<paths[loc.first][loc.second] <<endl;
            retrace(loc);
            possible = true;
            return;
        }
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++)
    {
        string s;
        cin >> s;

        // cout<<s<<endl;

        for(int j = 1 ; j <= M ; j++)
        {
            paths[i][j] = oo;
            if(s[j-1] == '#') paths[i][j] = 0;

            if(s[j-1] == 'M')
            {
                q.push(pii(i,j));
                paths[i][j] = 0;
            }

            if(s[j-1] == 'A')
            {
                A.first = i;
                A.second = j;
            }
        }
    }

    

    bfs();

    mora = true;

    from[A.first][A.second] = pii(0,0);

    paths[A.first][A.second] = 0;
    q.push(A);
    bfs();

    if(possible)
    {

        reverse(all(ans));
        cout<<ans<<endl;
    }
    
    else no

}