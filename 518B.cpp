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
	ll a1[26]={0},a2[26]={0},b1[26]={0},b2[26]={0};
	for (ll i = 0; i < s.length(); ++i)
	{
		if(s[i]>='a' && s[i]<='z'){a1[s[i]-'a']++;}
		else a2[s[i]-'A']++;	
	}
	for (ll i = 0; i < t.length(); ++i)
	{
		if(t[i]>='a' && t[i]<='z')
		{b1[t[i]-'a']++;}
		else b2[t[i]-'A']++;
	}
	ll ans=0;
	for (int i = 0; i < 26; ++i)
	{
		ll m1=min(a1[i],b1[i]);
		ans+=m1;
		a1[i]-=m1;
		b1[i]-=m1;
		ll m2=min(a2[i],b2[i]);
		ans+=m2;
		a2[i]-=m2;
		b2[i]-=m2;
	}
	ll ans2=0;
	for (int i = 0; i < 26; ++i)
	{
		ans2+=min(a1[i],b2[i]);
		ans2+=min(a2[i],b1[i]);
	}

	cout<<ans<<" "<<ans2;
}