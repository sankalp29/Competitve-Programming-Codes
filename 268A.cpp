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
	int n;
	cin>>n;
	ll a[n][2]={0};
	map<int,int>home;
	map<int,int>away;	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i][0]>>a[i][1];
		home[a[i][0]]++;
		away[a[i][1]]++;
	}
	int ans=0;
	for(int i = 0; i<n; ++i)
	{
		ans+=away[a[i][0]];
	}
	cout<<ans;
}

