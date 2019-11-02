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
	ll n,m;
	cin>>n>>m;
	int a[n+1];
	for (int i = 0; i < m; ++i)
	{
		ll flag[4]={1};
		ll b[3];
		for (int j = 0; j < 3; ++j)
		{
			cin>>b[j];
			if(a[b[j]]==0){flag[a[b[j]]]=0;}
		}
		int count=1;
		for (int j = 0; j < 3; ++j)
		{
			if(flag[count]!=0){count++;}
			if(a[b[j]]!=0)
			{
				a[b[j]]=count;
				flag[count]=1;
				count++;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
}


