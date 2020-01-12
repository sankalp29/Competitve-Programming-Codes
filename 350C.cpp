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

ll power(ll a,ll b)
{
	ll p=1;
	while(b)
	{
		if(b%2){p=p*a;}
		b>>=1;
		a=a*a;
	}
	return p;
}

ll gcd(ll a,ll b)
{
	if(a==0){return b;}
	return gcd(b%a,a);
}

double dist(ll x1,ll y1)
{
	return 1.0*sqrt((x1*x1)+(y1*y1));
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll n;
	cin>>n;
	vllp ans;
	ll x,y;
	vector<pair<double,pair<ll,ll> > > v;
	vector<char>ch;
	for(ll i=0;i<n;++i)
	{
		cin>>x>>y;
		v.pb(mp(dist(x,y),mp(x,y)));
	}

	sort(v.begin(),v.end());

	for(ll i = 0; i < n; ++i)
	{
		ll tx,ty;
		if(v[i].S.F!=0)
		{
			ans.pb(mp(1,v[i].S.F));
			if(v[i].S.F>0)
			ch.pb('R');
			else ch.pb('L');
		}
		if(v[i].S.S!=0)
		{
			ans.pb(mp(1,v[i].S.S));
			if(v[i].S.S>0){ch.pb('U');}
			else ch.pb('D');
		}
		ans.pb(mp(2,0));
		ch.pb('X');
		if(v[i].S.F!=0)
		{
			ans.pb(mp(1,v[i].S.F));
			if(v[i].S.F>0)
			ch.pb('L');
			else ch.pb('R');
		}
		if(v[i].S.S!=0)
		{
			ans.pb(mp(1,v[i].S.S));
			if(v[i].S.S>0){ch.pb('D');}
			else ch.pb('U');
		}
		ans.pb(mp(3,0));
		ch.pb('X');
	}
	cout<<ans.size() nl;
	for(ll i = 0; i < ans.size(); ++i)
	{
		if(ans[i].F==1)
		{
			cout<<abs(ans[i].F)<<" "<<abs(ans[i].S)<<" "<<ch[i] nl;continue;
		}
		cout<<abs(ans[i].F) nl;		
	}
}

