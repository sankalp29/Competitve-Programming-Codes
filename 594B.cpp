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
	sort(a,a+n);
	ll c=0,x=0,y=0,ch=0,ch1=1;
	
	if(n%2==0)
	{
		for(int i = 0; i < n/2; ++i)
		{
			y=y+a[i];
		}
		for (int i = n/2; i<n; ++i)
		{
			x=x+a[i];
		}
	}
	else
	{
		for (int i = 0; i < n/2; ++i)
		{
			y=y+a[i];
		}
		for (int i = n/2; i < n; ++i)
		{
			x=x+a[i];
		}
	}

	cout<<(x*x)+(y*y);
}


