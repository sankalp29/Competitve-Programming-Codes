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

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll x;
	cin>>x;
	ll ans=100000000000000;
	for(ll i=1;i<=sqrt(x);++i)
	{
		if(x%i==0)
		{
			ll _gcd=gcd(i,x/i);
			if((i*(x/i)/_gcd)==x)
			{
				if(max(i,x/i)<ans)
				{
					ans=max(i,x/i);
				}
			}
		}
	}
	cout<<min(ans,x/ans)<<" "<<max(ans,x/ans);
}