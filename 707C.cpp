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
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

int main()
{
	ll n;
	cin>>n;
	if(n%2)
	{
		ll m=n*n;
		double a=(1.0*m/2);
		double b=a+0.5;
		a=a-0.5;
		ll y=a;
		ll z=b;
		if(y==0 || z==0){cout<<-1;return 0;}
		cout<<y<<" "<<z;
		return 0;
	}
	ll m=n/2;
	m*=m;
	ll x=m-1;
	ll y=m+1;
	if(x==0 || y==0){cout<<-1;return 0;}
	cout<<x<<" "<<y;

}


