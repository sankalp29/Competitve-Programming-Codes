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
	ll n;
	cin>>n;
	ll c=0;
	ll a,ans=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		if(a>0)
		{
			c+=a;
		}
		else
		{
			if(c>0){c--;}
			else ans++;
		}
	}
	cout<<ans nl;
}