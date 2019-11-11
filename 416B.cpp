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
	ll m,n;
	cin>>m>>n;
	ll a[m][n]={0};
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>a[i][j];
		}
	}

	ll dp[m+1][n+1]={0};
	for (int i = 0; i < m+1; ++i)
	{
		for (int j = 0; j < n+1; ++j)
		{
			dp[i][j]=0;
		}
	}
	
	/*for (int i = 1; i < m+1; ++i)
	{
		dp[i][1]=dp[i-1][1]+a[i-1][0];
	}

	for (int i = 2; i < n+1; ++i)
	{
		dp[1][i]=dp[1][i-1]+a[0][i-1];
	}
*/
	for(int i = 1; i < m+1; ++i)
	{
		for(int j =1 ; j < n+1; ++j)
		{
			dp[i][j]=max(dp[i-1][j],dp[i][j-1])+a[i-1][j-1];
		}
	}
/*
	for (int i = 0; i < m+1; ++i)
	{
		for (int j = 0; j < n+1; ++j)
		{
			cout<<dp[i][j]<<" ";
		}
		cout nl;
	}
	cout nl;
*/
	for(int i = 1; i<m+1; ++i)
	{
		cout<<dp[i][n]<<" ";
	}
}