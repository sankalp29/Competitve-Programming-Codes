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
	vector<ll>v[1002];
	ll n,m;
	cin>>n>>m;
	ll v1,v2;
	for (int i = 0; i < m; ++i)
	{
		cin>>v1>>v2;
		v[v1].pb(v2);
		v[v2].pb(v1);
	}

	for (int i = 0; i < n; ++i)
	{
		if(v[i+1].size()==0)
		{
			cout<<n-1 nl;
			for (int j = 0; j < n; ++j)
			{
				if(i!=j)
				cout<<i+1<<" "<<j+1 nl;
			}
			return 0;
		}
	}

}