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

int main()
{
	ll n,m;
	cin>>n>>m;
	vector<ll>v;
	ll v1;
	for (int i = 0; i < m; ++i)
	{
		cin>>v1;
		v.pb(v1);
	}
	if(!m){cout<<"YES\n";return 0;}
	if(n==m){cout<<"NO\n";return 0;}
	sort(v.begin(),v.end());
	int c=1;
	for (int i = 1; i < v.size(); ++i)
	{
		if(v[i]-v[i-1]==1){c++;}
		else c=1;
		if(c==3){cout<<"NO";return 0;}
	}
	if(v[m-1]==n || v[0]==1){cout<<"NO\n";return 0;}
	cout<<"YES\n";
}
