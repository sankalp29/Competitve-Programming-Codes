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
#define pi 3.1415926536
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<ll>v;
	ll val;
	for (int i = 0; i < n; ++i)
	{
		cin>>val;
		if(val<0){v.pb(val);}
	}
	sort(v.begin(),v.end());
	ll ans=0;
	int l=v.size();
	for (int i = 0; i < min(m,l); ++i)
	{
		ans+=abs(v[i]);
	}
	cout<<ans;
}