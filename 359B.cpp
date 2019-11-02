#include<bits/stdc++.h>
#include <fstream>
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
	ll n,k;
	cin>>n>>k;
	ll a[2*n];
	for (int i = 0; i < 2*n; ++i)
	{
		a[i]=i+1;
	}
	ll c=0;
	for (int i=0;i<2*n && c<k; i+=2)
	{
		swap(a[i],a[i+1]);
		c++;
		if(c==k){break;}
	}
	for (int i = 0; i < 2*n; ++i)
	{
		cout<<a[i]<<" ";
	}
}