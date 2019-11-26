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
	ll minx=MAX,miny=MAX,maxx=-MAX,maxy=-MAX;
	ll n;
	cin>>n;
	ll x,y;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		minx=min(minx,x);
		miny=min(miny,y);
		maxx=max(maxx,x);
		maxy=max(maxy,y);
	}
	ll a=maxx-minx;
	a=max(a,maxy-miny);
	cout<<a*a;
}