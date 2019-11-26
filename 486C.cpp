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

int a[103][103], b[103][103], c[103][103];
 
int main()
{
	int n, m, i, j, k, ok, rez;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>b[i][j];
			a[i][j]=1;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(!b[i][j])
			{
				for(k=1;k<=n;k++)
				{
					a[k][j]=0;
				}
				for(k=1;k<=m;k++)
				{
					a[i][k]=0;
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			rez=0;
			for(k=1;k<=n;k++)
			{
				rez|=a[k][j];
			}
			for(k=1;k<=m;k++)
			{
				rez|=a[i][k];
			}
			c[i][j]=rez;
		}
	}
	ok=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(b[i][j]!=c[i][j])
			{
				ok=0;
			}
		}
	}
	if(!ok)
		cout << "NO\n";
	else
	{
		cout << "YES\n";
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
}