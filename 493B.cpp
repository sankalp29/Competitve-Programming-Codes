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
	ll n;
	cin>>n;
	ll a[n];
	ll val;
	vector<ll>fir;
	ll s1=0,s2=0;
	vector<ll>sec;
	for(ll i = 0; i < n; ++i)
	{
		cin>>val;
		a[i]=val;
		if(val>0){fir.pb(val);s1+=val;}
		else{sec.pb(abs(val));s2+=abs(val);}
	}
	if(s1>s2){cout<<"first";return 0;}
	if(s2>s1){cout<<"second";return 0;}
	for(ll i = 0; i < min(fir.size(),sec.size()); ++i)
	{
		if(fir[i]>sec[i]){cout<<"first";return 0;}
		if(sec[i]>fir[i]){cout<<"second";return 0;}
	}
	if(fir.size()>sec.size()){cout<<"first";return 0;}
	if(sec.size()>fir.size()){cout<<"second";return 0;}
	if(a[n-1]>0){cout<<"first";return 0;}
	cout<<"second";	
}


