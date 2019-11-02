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
	ll a,b;
	cin>>a>>b;
	vector<ll>v;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		v.pb(a);
		v.pb(a+b);
	}
	sort(v.begin(),v.end());
	for (int i = 1; i < v.size(); ++i)
	{
		if(v[i-1]==v[i]){cout<<"YES";return 0;}
	}
	cout<<"NO";
}