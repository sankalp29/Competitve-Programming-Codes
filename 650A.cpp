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

int main()
{
	ll n;
	cin>>n;
	vector<pair<ll,ll> >v;
	
	ll x,y;
	vector<pair<ll,ll> >w;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		v.pb(mp(x,y));
		w.pb(mp(y,x));
	}
	sort(v.begin(),v.end());
	sort(w.begin(),w.end());
	ll c1=1,c2=1,ans=0;
	for(int i = 0; i < n-1; ++i)
	{
		if(v[i].F==v[i+1].F)
		{
			c1++;
		}
		else
		{
			ans+=(c1*(c1-1))/2;
			c1=1;
		}
		if(v[i].F==v[i+1].F && v[i].S==v[i+1].S)
		{
			c2++;
		}
		else
		{
			ans-=(c2*(c2-1))/2;
			c2=1;
		}
	}

	ans+=(c1*(c1-1))/2;
	ans-=(c2*(c2-1))/2;
	c1=1;
	for(int i = 0; i < n-1; ++i)
	{
		if(w[i].F==w[i+1].F)
		{
			c1++;
		}
		else
		{
			ans+=(c1*(c1-1))/2;
			c1=1;
		}
	}
	ans+=(c1*(c1-1))/2;
	cout<<ans;

}


