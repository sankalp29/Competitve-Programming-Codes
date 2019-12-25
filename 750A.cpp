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
	ll n,k;
	cin>>n>>k;

	ll tim[n+1]={0};
	for(int i = 1; i<=n; ++i)
	{
		tim[i]=tim[i-1]+5*i;
	}

	k=240-k;
	int i=0;
	for (i=1;i<=n; ++i)
	{
		if(tim[i]>k){cout<<i-1;return 0;}
	}
	cout<<n;
}