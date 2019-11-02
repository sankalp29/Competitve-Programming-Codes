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
	ll a[n];
	vector<vector<ll> >v;
	map<ll,ll>m;
	ll c=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if(m.find(a[i])==m.end())
		{
			c++;
			m[a[i]]=1;	
		}
	}
	for (int i = 0; i < c; ++i)
	{
		v.pb(0);
	}
	c=0;
	map<ll,ll>m1;
	for (int i = 0; i < n; ++i)
	{
		if(m1.find(a[i])==m1.end())
		{
			m1[a[i]]=i;
			v.pb(i);
		}
		else
		{
			
		}
	}
}	

