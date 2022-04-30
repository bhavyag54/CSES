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



int main()
{
    fast;
    
    string s; cin >> s;

    int l = 0, r = 0;
    bool a = 0, b = 0, c = 0, d = 0;
    int n = s.size();

    string ans;

    while(l < n)
    {
        a = 0, b = 0, c = 0, d = 0;

        a += (s[r] == 'A');
        b += (s[r] == 'C');
        c += (s[r] == 'G');
        d += (s[r] == 'T');

        r = l+1;

        while(r < n and a+b+c+d != 4)
        {
            a += (s[r] == 'A');
            b += (s[r] == 'C');
            c += (s[r] == 'G');
            d += (s[r] == 'T');
            r++;
        }

        if(a+b+c+d == 4)
            ans += s[r-1];

        l = r;
    }


    // cerr<<a<<' '<<b<<' '<<c<<' '<<d;
    if (a+b+c+d == 4)
        ans += 'A';
    else if (!a) ans += 'A';
    else if (!b) ans += 'C';
    else if (!c) ans += 'G';
    else if (!d) ans += 'T';
    cout<<ans;
    
}