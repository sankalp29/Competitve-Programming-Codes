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
	int n,m,d;
	cin>>n>>m>>d;
	int a[n*m];
	for (int i = 0; i < n*m; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n*m);
	int x=a[0];
	for (int i = 1; i < n*m; ++i)
	{
		if((a[i]-a[0])%d!=0){cout<<-1;return 0;}
	}
	ll ans=0;
	x=a[n*m/2];
	for (int i = 0; i < n*m; ++i)
	{
		ans+=abs(x-a[i])/d;
	}
	if(n*m%2==0)
	{
		x=a[n*m/2 -1];
		ll ans1=0;
		for(int i = 0; i<n*m; ++i)
		{
			ans1+=abs(x-a[i])/d;
		}
		ans=min(ans,ans1);
	}
	cout<<ans;
}

