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
	ll n,t;
	cin>>n>>t;
	ll a[n];
	for(int i=1;i<n; ++i)
	{
		cin>>a[i];
	}
	ll i=1;
	while(i<t)
	{
		i=i+a[i];
	}
	if(i==t){cout<<"YES";}
	else cout<<"NO";
}