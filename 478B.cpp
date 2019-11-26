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
	ll m,n;
	cin>>n>>m;

	if(n==1){cout<<m*(m-1)/2<<" "<<m*(m-1)/2;return 0;}

	ll maxi=(n-m+1)*(n-m)/2;
	ll mini=0;
	if(n%m==0)
	{
		ll d=n/m;
		mini=d*(d-1)*m/2;
		cout<<mini<<" "<<maxi;return 0;
	}
	ll mod=n%m;
	ll x=n/m;

	mini=mod*(x+1)*(x)/2;
	mini+=(m-mod)*(x)*(x-1)/2;
	cout<<mini<<" "<<maxi;
}