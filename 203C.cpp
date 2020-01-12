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
	ll n,d;
	cin>>n>>d;
	ll a,b;
	cin>>a>>b;
	ll x,y;
	vllp v;
	for(ll i = 0; i < n; ++i)
	{
		cin>>x>>y;
		v.pb(mp(x*a+y*b,i+1));
	}
	sort(v.begin(),v.end());
	vector<ll>ans;
	ll c=0,am=0,i=0;
	while(i<n)
	{
		if(v[i].F<=d)
		{
			d=d-v[i].F;
			ans.pb(v[i].S);
			i++;c++;
			continue;
		}
		break;
	}
	cout<<c nl;
	for(int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<" ";
	}
}

