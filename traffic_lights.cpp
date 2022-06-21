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

void solve()
{
    int x, n;
    cin >> x >> n;

    set<int> pos;
    multiset<int> length;

    pos.insert(0);
    pos.insert(x);
    
    length.insert(x);

    int temp;
    for(int i = 0; i<n; i++)
    {
        cin >> temp;
        pos.insert(temp);

        auto it = pos.find(temp);
        int prevPos = *prev(it);
        int nextPos = *next(it);

        length.erase(length.find(nextPos - prevPos));
        length.insert(temp - prevPos);
        length.insert(nextPos - temp);

        cout<<*length.rbegin()<<" ";

    }

}


int main()
{
    fast;

    solve();
    return 0;

}