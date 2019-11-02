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


int gcd(int a,int b)
{
	if(a==0){return b;}
	return gcd(b%a,a);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	ll n,k;
	cin>>n>>k;
	map<ll,ll>m;
	if(n==k){cout<<"-1";return 0;}
	
	int a[n+1];
	for (int i = 1; i <=n; ++i)
	{
		a[i]=i;
	}
	for (int i = 1; i<=n-k ;++i)
	{
		a[i]--;
	}
	a[1]=n-k;
	for(int i = 1; i <=n; ++i)
	{
		cout<<a[i]<<" ";
	}
}