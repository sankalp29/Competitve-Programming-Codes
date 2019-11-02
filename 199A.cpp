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

	ll n;
	cin>>n;
	if(n==1){cout<<"0 0 1";return 0;}
	vector<ll>v;
	ll a=0,b=1,c=1;
	v.pb(a);
	v.pb(a);
	v.pb(a);
	v.pb(b);
	for (int i = 0; c<=n; ++i)
	{
		c=a+b;
		v.pb(c);
		a=b;
		b=c;
	}
	int f=0;
	for (int i = 2; i < v.size(); ++i)
	{
		if(v[i]==n){cout<<"0 "<<v[i-2]<<" "<<v[i-1];f=1;break;}
	}
	if(!f){cout<<"I'm too stupid to solve this problem";}
}