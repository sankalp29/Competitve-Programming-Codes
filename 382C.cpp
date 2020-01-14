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

ll gcd(ll a,ll b)
{
	if(a==0){return b;}
	return gcd(b%a,a);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll n;
	cin>>n;
	ll a[n];
	for(ll i = 0; i < n; ++i)
	{
		cin>>a[i];		
	}
	if(n==1){cout<<-1;return 0;}
	sort(a,a+n);
	ll c0=0,mind=INT_MAX;
	for(int i = 0; i<n-1; ++i)
	{
		if(a[i]==a[i+1]){c0++;}
		mind=min(mind,a[i+1]-a[i]);
	}
	if(c0==n-1){cout<<1 nl;cout<<a[0];return 0;}
	if(c0>0 && c0<n-1){cout<<0;return 0;}
	vector<ll>v;
	for(int i=0;i<n-1;++i)
	{
		if((a[i+1]-a[i])%mind!=0){cout<<0;return 0;}
		
		ll st=a[i],end=a[i+1];
		while(st+mind!=end)
		{
			v.pb(st+mind);
			st+=mind;
		}
	}
	if(v.size()==0)
	{
		v.pb(a[0]-mind);
		v.pb(a[n-1]+mind);
	}
	sort(v.begin(),v.end());
	cout<<v.size() nl;
	for(int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
}




