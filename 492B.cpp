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

int main()
{
	ll n,l;
	cin>>n>>l;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);

	ll maxi=0;
	maxi=max(maxi,a[0]);
	maxi=max(maxi,l-a[n-1]);
	
	for (int i = 1; i < n; ++i)
	{
		maxi=max(maxi,a[i]-a[i-1]);
	}
	double ans=0.0;
	ans=maxi/2.0;
	double max1=a[0]/1.0;
	double max2=(l-a[n-1])/1.0;
	ans=max(ans,max1);
	ans=max(ans,max2);	
	printf("%.10f",ans);
	
}

