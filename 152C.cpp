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
	
	ll n,m;
	cin>>n>>m;
	vector<string>v;
	string s;
	for(int i = 0; i < n; ++i)
	{
		cin>>s;
		v.pb(s);
	}
	ll ans=1;
	for(int i = 0; i < m; ++i)
	{
		int a[26]={0};
		for (int j = 0; j < n; ++j)
		{
			a[v[j][i]-'A']=1;
		}
		ll c=0;
		for(int j = 0; j < 26; ++j)
		{
			if(a[j]){c++;}
		}
		ans=ans*c;
		ans=ans%MOD;
	}
	cout<<ans;
}