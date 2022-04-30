#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define mod 1000000007
#define yes cout<<"YES"<<endl;
#define no cout<<"NO SOLUTION"<<endl;
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

    string s;
    cin >> s;
    
    vector<int> a(26);

    for(char c: s)
        a[c - 'A']++;
    
    int check = 0;

    for(int i = 0; i < 26 ; i++)
        check += (a[i]%2);
    
    if(check > 1)
    {
        no
        return 0;
    }

    string result;

    for(int i = 0; i < 26 ; i++)
    {
        if(!(a[i]&1))
            for(int j = 0; j < a[i]/2 ; j++)    result.pb(i+ 'A');
    }
    for(int i = 0; i < 26 ;i++)
    {
        if(a[i]&1)
        {
            for(int j = 0; j < a[i]; j++) result.pb(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(a[i]&1)){
            for(int j = 0; j < a[i]/2; j++) result.pb(i + 'A');
        }
    }

    cout << result << endl;
    return 0;
}