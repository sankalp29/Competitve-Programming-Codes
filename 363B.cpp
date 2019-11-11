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
	ll n,k;
	cin>>n>>k;
	ll h[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>h[i];
	}
	ll min=MAX;
	int ind=-1;
	ll sum[n+1]={0};
	for (ll i = 0; i < n; ++i)
	{
		sum[i+1]=sum[i]+h[i];
	}

	for (ll i=k; i<=n; ++i)
	{
		if(sum[i]-sum[i-k]<min)
		{
			min=sum[i]-sum[i-k];
			ind=i-k+1;
		}

	}
	cout<<ind nl;
}