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

int check(ll n,int k)
{
	int a[10]={0};
	while(n)
	{
		a[n%10]=1;
		n/=10;
	}
	for (int i = 0; i<=k; ++i)
	{
		if(!a[i]){return 0;}
	}
	return 1;
}

int main()
{
	int n,k;
	cin>>n>>k;
	ll val,c=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>val;
		if(check(val,k)){c++;}
	}
	cout<<c;
}