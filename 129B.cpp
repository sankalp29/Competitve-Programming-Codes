#include<bits/stdc++.h>
#include <fstream>
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

int v[101][101];

int main()
{
	int n,m;
	cin>>n>>m;
	int a,b;
	for (int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		v[a][b]=1;
		v[b][a]=1;
	}
	int ans=0;
	while(1)
	{
		int f=0;
		int ind[102]={0};
		for(int i = 1; i <=n; ++i)
		{	
			int c=0;
			for (int j=1;j<=n;++j)
			{
				if(v[i][j])
				{
					c++;
				}
			}
			if(c==1)
			{
				ind[f]=i;
				f++;
			}
		}
		if(!f){break;}
		for (int i = 0; i < f; ++i)
		{
			for (int j = 0; j<=n; ++j)
			{
				v[ind[i]][j]=0;
				v[j][ind[i]]=0;
			}
		}
		ans++;
	}
	cout<<ans nl;
}