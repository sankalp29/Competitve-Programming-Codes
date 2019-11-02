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

ll calc(ll n)
{
	ll s=0;
	while(n)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}


int main()
{
	ll n;
	cin>>n;
	ll x=ll(sqrt(n));
	while(x)
	{
		ll sum=calc(x);
		if(x*x+x*sum==n){cout<<x;return 0;}
		if(x*x+x*90<n){break;}
		x--;
	}
	cout<<-1;
}