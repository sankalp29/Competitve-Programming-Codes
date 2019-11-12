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

map<ll,ll>home;
map<ll,ll>away;

int main()
{
	ll n;
	cin>>n;
	ll a[n][2];
	ll x,y;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i][0]>>a[i][1];
		home[a[i][0]]++;
		away[a[i][1]]++;
	}

	for (int i = 0; i < n; ++i)
	{
		ll h=0,aw=0;
		h=n-1;
		h=h+home[a[i][1]];
		cout<<h<<" "<<2*n-2-h nl;
	}
}
