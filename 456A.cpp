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

	ll n;
	cin>>n;
	vllp v;
	ll v1,v2;
	for (int i = 0; i < n; ++i)
	{
		cin>>v1>>v2;
		v.pb(mp(v1,v2));
	}
	sort(v.begin(),v.end());

	for(int i = 0; i < n-1; ++i)
	{
		if(v[i].S>=v[i+1].S){cout<<"Happy Alex";return 0;}
	}
	cout<<"Poor Alex";



}






