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
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

ll calcdis(ll x1,ll y1,ll x2,ll y2)
{
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll n,x1,y1,x2,y2;
	cin>>n>>x1>>y1>>x2>>y2;
	vector<pair<ll,pair<ll,ll> > >v; 
	vector<pair<ll,pair<ll,ll> > >v1; 
	ll x,y;
	for(int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		v.pb(mp(calcdis(x1,y1,x,y),mp(x,y)));
		v1.pb(mp(calcdis(x2,y2,x,y),mp(x,y)));
	}
	sort(v.begin(),v.end());
	
	ll ans=100000000000000000;
	
	for(int i = 0; i < n; ++i)
	{
		ll dist1=calcdis(x1,y1,v[i].S.F,v[i].S.S);
		ll maxi=0;
		ll dist=0;
		for(int j = i+1; j < n; ++j)
		{
			dist=calcdis(x2,y2,v[j].S.F,v[j].S.S);
			maxi=max(maxi,dist);
		}
		ans=min(ans,maxi+dist1);
	}

	sort(v1.begin(),v1.end());
	
	for(int i = 0; i < n; ++i)
	{
		ll dist1=calcdis(x2,y2,v1[i].S.F,v1[i].S.S);
		ll dist=0;
		ll maxi=0;
		for(int j = i+1; j < n; ++j)
		{
			dist=calcdis(x1,y1,v1[j].S.F,v1[j].S.S);
			maxi=max(maxi,dist);
		}
		ans=min(ans,maxi+dist1);
	}
	cout<<ans;
}