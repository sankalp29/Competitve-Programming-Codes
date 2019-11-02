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
	ll n;
	cin>>n;
	string s="abcd";
	ll j=0;
	for (ll i = 0; i < n; ++i)
	{
		cout<<s[j];
		j++;
		j=j%4;
	}
}