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
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	ll sum[n+1]={0};
	for (int i = 0; i < n; ++i)
	{
		sum[i+1]=sum[i]+a[i];
	}
	sort(a,a+n);
	ll u[n+1]={0};
	for (int i = 0; i < n; ++i)
	{
		u[i+1]=u[i]+a[i];
	}
	ll m;
	cin>>m;
	ll v1,v2,v3;

	for (int i = 0; i < m; ++i)
	{
		cin>>v1>>v2>>v3;
		if(v1==1)
		{
			cout<<sum[v3]-sum[v2-1] nl;
		}
		else
		{
			cout<<u[v3]-u[v2-1] nl;
		}
	}

}




