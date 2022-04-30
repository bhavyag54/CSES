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


void solve(int a, int b, int c, int n)
{
    if(n == 0) return;

    solve(a, c, b, n-1);

    cout<<a<<" "<<c<<endl;
    
    solve(b,a,c,n-1);
}


int main()
{
    fast;

    int n;
    cin >> n;

    cout << ( 1 << n ) - 1 << endl;

    solve(1,2,3,n);
}