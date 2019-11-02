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
	ll a[n],sum[n+1]={0};
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		sum[i+1]=sum[i]+a[i];
	}
	ll maxrsum=0,posb=-1,posa=-1,total=0,temp=-1;
	for (int i=n-k; i>=k; --i)
	{
		ll rsum=sum[i+k]-sum[i];
		ll lsum=sum[i]-sum[i-k];

		if(rsum>=maxrsum)
		{
			temp=i+1;
			maxrsum=rsum;
		}

		if(lsum+maxrsum>=total)
		{
			posa=i-k+1;
			posb=temp;
			total=lsum+maxrsum;
		}
	}
	cout<<posa<<" "<<posb;



}




