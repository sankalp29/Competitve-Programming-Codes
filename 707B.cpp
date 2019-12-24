#include<bits/stdc++.h>
typedef long long ll;
typedef double ld;
#define vll vector<ll>
#define vvll vector< vll >
#define vld vector< ld >
#define vvld vector< vld >
#define pll pair<ll ,ll >
#define nl <<endl
#define vllp vector< pll >
#define MOD 1000000007
#define endl "\n"
#define MAX 1000000007
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

int storage[100005];

int main()
{
	ll mini=MAX;
	ll n,m,k;
	cin>>n>>m>>k;
	ll u,v,l;
	vector<pair<pair<ll,ll>,ll> >vec;
	for(ll i = 0; i < m; ++i)
	{
		cin>>u>>v>>l;

		pair<ll,ll>pa1;
		pa1.F=u;
		pa1.S=v;
		vec.pb(mp(mp(u,v),l));
	}
	for(int i = 0; i < k; ++i)
	{
		cin>>u;
		storage[u]=1;
	}

	for(ll i = 0; i < vec.size(); ++i)
	{
		ll x1,x2,a1=0,b1=0;
		x1=vec[i].F.F;
		x2=vec[i].F.S;
		if(storage[x1]==1){a1=1;}
		if(storage[x2]==1){b1=1;}
		if(a1+b1==1)
		{
			mini=min(mini,vec[i].S);
		}
	}
	if(mini==MAX){cout<<-1;return 0;}
	cout<<mini;
}