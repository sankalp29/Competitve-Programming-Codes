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
	ll n;
	cin>>n;
	ll h[n+1]={0};
	for (int i = 1; i <=n; ++i)
	{
		cin>>h[i];
	}
	ll ans=2*n-1;
	ll cur=0;
	for (int i = 1; i <=n; ++i)
	{
		ans=ans+abs(h[i]-cur);
		cur=h[i];		
	}
	cout<<ans;
}


