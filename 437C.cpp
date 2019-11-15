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
	ll n,m;
	cin>>n>>m;
	ll v[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	ll a,b,ans=0;
	for (int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		a--;
		b--;
		ans+=min(v[a],v[b]);
	}
	cout<<ans;
}