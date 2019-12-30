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
	int n,k;
	cin>>n>>k;
	int a[n+1]={0};
	int ans=0;
	vector<int>v;
	if(n==k){cout<<1 nl;cout<<1;return 0;}
	if(!k)
	{
		cout<<n nl;
		for (int i = 0; i < n; ++i)
		{
			cout<<i+1<<" ";
		}
		return 0;
	}
	for (int i = 1; i <=n; ++i)
	{
		int x=2*k+1;
		if(i+k>n){v.pb(n);}
		else v.pb(i+k);
		int j;
		for (j = i; j <=n && x>0; ++j)
		{
			a[j]=1;
			x--;
		}
		i=j-1;
		ans++;
	}
	cout<<ans nl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
}