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
	int n,m;
	cin>>n>>m;
	int a[n]={0},b[m]={0};
	int hb,hg;
	cin>>hb;
	int v;
	for (int i = 0; i < hb; ++i)
	{
		cin>>v;
		a[v]=1;
	}
	cin>>hg;
	for (int i = 0; i < hg; ++i)
	{
		cin>>v;
		b[v]=1;
	}
	int c=0;
	for (int i = 0; i < max(n,m)*max(n,m); ++i)
	{
		a[i%n]=min(1,a[i%n]+b[i%m]);
		b[i%m]=min(1,a[i%n]+b[i%m]);
	}
	for (int i = 0; i<n; ++i)
	{
		if(!a[i]){cout<<"No";return 0;}
	}
	for (int i = 0; i < m; ++i)
	{
		if(!b[i]){cout<<"No";return 0;}
	}
	cout<<"Yes";
}


