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
bool a[1000001];
void sieve()
{
	for (int i =2; i*i<1000001; ++i)
	{
		if(a[i]==0)
		{
			for (int j =i*i; j<=1000001; j+=i)
			{
				a[j]=1;
			}
		}
	}
}

int main()
{
	ll n;
	cin>>n;
	//if(a[n]==0){cout<<n<<" 1";return 0;}
	vector<ll>v;
	ll x=1;
	v.pb(x);
	for (ll i=2; i<=n && x!=n; ++i)
	{
		if(n%(x*i)==0){v.pb(x*i);x=x*i;i--;}
	}
	for (ll i = v.size()-1; i>=0; --i)
	{
		cout<<v[i]<<" ";
	}
}