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

bool a[1002];
vector<ll>v;
void sieve()
{
	for(int i = 2; i<=1000; ++i)
	{
		if(a[i]==false)
		{
			v.pb(i);
			for(int j =i*i; j <=1000; j+=i)
			{
				a[j]=true;
			}	
		}
	}
}

int main()
{
	ll n,m;
	cin>>n>>m;
	ll x[5]={0},y[5]={0};

	ll x1=n/5,y1=m/5;
	for (int i = 1; i <=5; ++i)
	{
		x[i%5]+=x1;
		y[i%5]+=y1;
	}

	n=n%5;
	m=m%5;

	for (int i = 1; i<=n; ++i)
	{
		x[i%5]+=1;
	}
	for (int i = 1; i <=m; ++i)
	{
		y[i%5]+=1;
	}
	ll ans=0;
	for (int i = 1; i < 5; ++i)
	{
		ans+=(x[i]*y[5-i]);
	}
	ans+=x[0]*y[0];
	cout<<ans nl;
}