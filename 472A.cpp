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

bool a[1000003];
map<ll,ll>m;

void sieve()
{
	for (int i=2; i*i<=1000001; ++i)
	{
		if(a[i]==0)
		{
			for (int j=i*i; j<=1000001; j+=i)
			{
				a[j]=1;
			}
			m[i]=1;
		}
	}
}

bool notpri(ll n)
{
	for (ll i = 2; i<=sqrt(n); ++i)
	{
		if(n%i==0){return true;}
	}
	return false;
}

int main()
{
	//sieve();
	m[1]=1;
	m[0]=1;
	ll n;
	cin>>n;

	for(ll i = 4; i<=n; ++i)
	{
		if(notpri(i) && notpri(n-i)){cout<<i<<" "<<n-i;return 0;}
	}
}