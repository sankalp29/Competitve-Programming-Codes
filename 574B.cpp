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

	vector<int>v[n+1];
	ll mini=MAX;
	ll a,b;
	int edge[n+1][n+1]={0};
	for (int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		//a--;b--;
		v[a].pb(b);
		v[b].pb(a);
		edge[a][b]=1;
		edge[b][a]=1;
	}
	ll xx=6;
	for(int i=1; i<=n; ++i)
	{
		for(int j=0;j<v[i].size();++j)
		{
			for(int k=j+1;k<v[i].size();++k)
			{
				if(edge[v[i][j]][v[i][k]])
				{
					if(v[i].size()+v[v[i][j]].size()+v[v[i][k]].size()-xx<mini)
					{
						mini=v[i].size()+v[v[i][j]].size()+v[v[i][k]].size()-xx;
					}
				}
			}
		}
	}
	if(mini==MAX){mini=-1;}
	cout<<mini;
}

