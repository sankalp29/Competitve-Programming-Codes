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
	int n,m;
	cin>>n>>m;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	ll b[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	ll done[n]={0};
	int z=0;
	for(int i = 0; i <m && z<n; ++i)
	{
		if(b[i]>=a[z]){done[z]=1;z++;}
	}
	int c=0;
	for (int i = 0; i < n; ++i)
	{
		if(!done[i]){c++;}
	}
	cout<<c nl;
}


