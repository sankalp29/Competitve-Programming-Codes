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
	char a[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>a[i][j];
		}
	}
	int c=0,prev=1;
	for (int i = 0; i <n; ++i)
	{
		if(prev==c){c=1-c;}
		prev=c;
		for (int j = 0; j < m; ++j)
		{
			if(a[i][j]=='.')
			{
				if(c){a[i][j]='B';}
				else a[i][j]='W';	
			}
			c=1-c;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<a[i][j];
		}
		cout nl;
	}
}