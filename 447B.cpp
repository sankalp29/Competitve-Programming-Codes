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
	string s;
	cin>>s;
	ll k;
	cin>>k;
	ll a[26];
	ll maxi=0;
	for (int i = 0; i < 26; ++i)
	{
		cin>>a[i];
		maxi=max(maxi,a[i]);
	}
	ll i=0,sum=0;
	for (i = 0; i <s.length(); ++i)
	{
		sum+=(a[s[i]-'a']*(i+1));
	}
	for (ll j=0;j<k; ++j)
	{
		sum+=(maxi*(i+j+1));
	}
	cout<<sum;
}


