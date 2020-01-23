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
	#ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	string a,b,s1,s2;
	cin>>s1>>s2;
	if(s1.length()<s2.length()){a=s1;b=s2;}
	else {a=s1;b=s2;}
	ll minl=min(a.length(),b.length());
	

	map<string,ll>ma,mb;
	vector<ll>factlen;
	ll al=a.length(),bl=b.length(),ans=0;
	for(ll i=1;i<=minl; ++i)
	{
		if(al%i==0 && bl%i==0){factlen.pb(i);}
	}
	
	for(ll i=0;i<factlen.size();++i)
	{
		ll len=factlen[i];
		string p=a.substr(0,len),z="",y="";
		
		ll f1=al/len,f2=bl/len;
		while(f1--){z+=p;}
		
		while(f2--){y+=p;}
		
		if(z==a && y==b){ans++;}
	}
	cout<<ans;
}







