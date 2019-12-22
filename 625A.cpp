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
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	ll ans=n/a;
	if(a<=b-c)
	{
		ans=n/a;
	}
	if(b<=n)
	{
		ll x=n-b;
		ll no=x/(b-c);
		no++;
		no+=(x%(b-c)+c)/a;
		ans=max(ans,no);
	}
	cout<<ans;
}
