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
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

ll gcd(ll a,ll b)
{
	if(a==0){return b;}
	return gcd(b%a,a);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string s;
	cin>>s;
	ll n=s.length();
	if(n<=2){cout<<s;return 0;}
	string p="";
	ll y=2;
	for(ll i=0;i<n;++i)
	{
		ll j=i+1,c=1;
		while(j<n && s[i]==s[j]){c++;j++;}
		i=j-1;
		int x=min(c,y);
		for(int k = 0; k < x; ++k)
		{
			p+=s[i];
		}
	}
	if(p.length()<4){cout<<p;return 0;}
	string ans="";
	ans+=p[0];ans+=p[1];
	ans+=p[2];
	ll l=3;
	for(ll i=3;i<p.length();++i)
	{
		l=ans.length();
		if(p[i]==ans[l-1] && ans[l-2]==ans[l-3]){continue;}
		ans+=p[i];
	}
	cout<<ans;
}