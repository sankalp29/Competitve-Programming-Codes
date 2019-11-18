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

int sorted(ll a[],ll n)
{
	for (int i = 1; i < n; ++i)
	{
		if(a[i-1]>a[i]){return 0;}
	}
	return 1;
}

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll mini=INT_MAX;
	ll minind=-1;
	for(ll i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	if(sorted(a,n))
	{
		cout<<"0";return 0;
	}
	ll st=-1;
	for (int i = 1; i < n; ++i)
	{
		if(a[i-1]>a[i])
		{
			st=i;
			break;
		}
	}
	ll c=0;
	for (int i = st+1; i < n; ++i)
	{
		c++;
		if(a[i-1]>a[i]){cout<<"-1";return 0;}
	}
	if(a[0]<a[n-1]){cout<<-1;return 0;}
	cout<<c+1;
}