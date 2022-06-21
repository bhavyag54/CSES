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

vector<vector<int>> chess(8, vector<int>(8,1));

void takeInput()
{
    string x;
    for(int i = 0; i<8; i++)
    {
        cin >> x;
        for(int j = 0; j<8; j++)
            chess[i][j] = x[j] != '.';
    }

}

int ans = 0;
bool col[16], diag1[16], diag2[16];

void solve(int r)
{
    if(r == 8)
    {
        ans++;
        return;
    }

    for(int c = 0; c<8; c++)
    {
        if(col[c] or diag1[c+r] or diag2[r-c+7] or chess[r][c]) continue;

        col[c] = diag1[r+c] = diag2[r-c+7] = true;
        solve(r+1);
        col[c] = diag1[r+c] = diag2[r-c+7] = false;

    }
}

int main()
{
    fast;

    takeInput();

    for(int i = 0; i<16;i++)
        col[i] = diag1[i] = diag2[i] = false;

    solve(0);
    cout<<ans;

}