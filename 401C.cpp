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
	ll n,m;
	cin>>n>>m;
	
	if(m>2+n*2 || n>m+1){cout<<"-1";return 0;}
	
	if(n>m){cout<<"0";n--;}
	for (ll i = 0;n>0 && m>0; ++i)
	{
		if(m>n)
		{m=m-2;n--;cout<<"110";}
		else {m--;n--;cout<<"10";}
	}
	for (ll i = 0; i < m; ++i)
	{
		cout<<"1";
	}
	return 0;
}	