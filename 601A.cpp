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

bool visited_train[405];
vector<vector<int> >train[405];
int n,m;
ll ans=MAX;
int bfs(int i,int c)
{
	visited_train[i]=true;
	if(c==n){c++;return c;}
	for(int j=0;j<train[i].size();++j)
	{
		return min(ans,bfs(j,c+1));	
	}
}	

int main()
{
	
	cin>>n>>m;
	int u,v;
	for(int i=1;i<=m;++i)
	{
		cin>>u>>v;
		train[u].pb(v);
		train[v].pb(u);
	}
	bfs(1,0);
}

