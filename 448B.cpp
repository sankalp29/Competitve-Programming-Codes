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
	string s,t;
	cin>>s>>t;
	ll a[26]={0},b[26]={0};
	ll n=s.length(),m=t.length();
	if(m>n){cout<<"need tree";return 0;}
	for (ll i = 0; i < n; ++i)
	{
		a[s[i]-'a']++;
	}
	for (ll i = 0; i < m; ++i)
	{
		b[t[i]-'a']++;
	}
	ll f=0,c=0;
	for (ll i = 0; i < 26; ++i)
	{
		if(b[i]>a[i]){cout<<"need tree";return 0;}
		if(b[i]==a[i]){c++;}
		if(a[i]>b[i]){f=1;}
	}
	if(c==26)
	{
		cout<<"array";return 0;
	}
	if(f)
	{
		ll x=0;
		for (ll i = 0; i <n; ++i)
		{
			if(s[i]==t[x]){x++;}
		}
		if(x==m){cout<<"automaton";return 0;}
		cout<<"both";
	}
}