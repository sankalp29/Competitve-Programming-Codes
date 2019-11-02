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
	int k;
	cin>>k;
	string s;
	cin>>s;
	int a[26]={0};
	for (int i = 0; i < s.length(); ++i)
	{
		a[s[i]-'a']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if(a[i]%k!=0){cout<<"-1";return 0;}
	}
	string ans="";
	for (int i = 0; i<26; ++i)
	{
		for (int j = 0; j<a[i]/k;++j)
		{
			char p='a'+i;
			ans=ans+p;
		}
	}
	string p=ans;
	for(int i = 0;i<k-1; ++i)
	{
		ans+=p;
	}
	cout<<ans;
}