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
	ll t;
	cin>>t;
	while(t--)
	{			
		ll n;
		cin>>n;
		ll a[n]={0},s1=0,ne=0,po=0;	
		for(ll i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(a[i]<0){ne++;}
			if(a[i]>0){po++;}
			s1+=a[i];
		}
		if(po==n){cout<<"YES\n";continue;}

		if(ne==n){cout<<"NO\n";continue;}
		ll maxs=-MOD,s=0,c=0,maxc=0;
		for(int i = 0;i<n-1; ++i)
		{
			s+=a[i];
			if(maxs<s){maxs=s;}
			else if(s<0){s=0;}
		}
		s=0;
		for(int i = 1; i<n; ++i)
		{
			s+=a[i];
			if(maxs<s){maxs=s;}
			else if(s<0){s=0;}	
		}
		if(s1>maxs){cout<<"YES\n";continue;}
		cout<<"NO\n";
	}
}




