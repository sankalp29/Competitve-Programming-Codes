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
	ll n;
	cin>>n;
	ll a[n];
	map<ll,ll>m;
	vector<ll>v;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if(m.find(a[i])==m.end()){m[a[i]]=1;v.pb(a[i]);}
		else m[a[i]]++;
	}
	sort(v.begin(),v.end());
	ll c=0,x=2;
	for(int i = 0; i < v.size()-1; ++i)
	{
		c+=min(x,m[v[i]]);
	}
	c++;
	cout<<c nl;
	ll i=0;
	c=0;
	
	for(int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
		m[v[i]]--;
	}
	for(int i = v.size()-2; i>=0; --i)
	{
		if(m[v[i]]>0){cout<<v[i]<<" ";}
	}
}

