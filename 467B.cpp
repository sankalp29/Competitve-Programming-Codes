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

ll count(ll n)
{
	ll c=0;
	while(n!=0)
	{
		n=n&(n-1);
		c++;
	}
	return c;
}

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	ll a[m+1];
	ll c=0;
	for (int i = 0; i < m+1; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		ll x=a[i]^a[m];
		if(count(x)<=k){c++;}		
	}
	cout<<c;
}


