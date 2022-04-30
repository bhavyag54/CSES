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

int main()
{
    fast;

    int n;
    cin>>n;
    int temp;

    int a[n+1];

    for(int i = 1; i<=n ; i++)
    {
        cin >> temp;
        a[temp] = i;
    }

    int count = (a[1] == 1)?0:1;

    for(int i = 2; i<=n;i++)
    {
        if(a[i] < a[i-1])
            count++;
    }

    cout<<count<<endl;

}
