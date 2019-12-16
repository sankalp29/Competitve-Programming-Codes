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
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		while(a[i]%2==0){a[i]/=2;}
		while(a[i]%3==0){a[i]/=3;}
	}
	for (int i = 0; i < n-1; ++i)
	{
		if(a[i]!=a[i+1]){cout<<"No";return 0;}
	}
	cout<<"Yes";
}