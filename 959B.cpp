#include<bits/stdc++.h>
typedef long long ll;
typedef double ld;
#define vll vector<ll>
#define vvll vector< vll >
#define vld vector< ld >
#define vvld vector< vld >
#define pll pair<ll ,ll >
#define vllp vector< pll >
#define MOD 1000000007
#define endl "\n"
#define MAX 1000000007
#define nl <<endl
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

int main()
{
	ll n,k,m;
	cin>>n>>k>>m;
	string a[n+1];
	map<string,ll>ma;
	for (int i = 1; i <=n; ++i)
	{
		cin>>a[i];
		ma[a[i]]=i;
	}
	ll cost[n+1];
	for (int i = 1; i <=n; ++i)
	{
		cin>>cost[i];
	}
	ll x;
	while(k--)
	{
		cin>>x;
		ll minco=INT_MAX;
		ll val;
		ll x1[x];
		for (int i = 0; i < x; ++i)
		{
			cin>>x1[i];
			minco=min(minco,cost[x1[i]]);
		}
		for (int i = 0; i <x; ++i)
		{
			cost[x1[i]]=minco;
		}
	}
	ll ans=0;
	string b[m+1];
	for (int i = 1; i<=m; ++i)
	{
		cin>>b[i];
		ans+=cost[ma[b[i]]];
	}
	cout<<ans;
}