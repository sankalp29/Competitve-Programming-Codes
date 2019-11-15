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
	ll n,d;
	cin>>n>>d;
	ll t[n];
	ll sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>t[i];
		sum+=t[i];
	}
	
	if(sum+(n-1)*10>d){cout<<"-1";return 0;}
	d=d-(sum+(n-1)*10);
	ll ans=(n-1)*2;
	ans+=(d/5);
	cout<<ans;
}