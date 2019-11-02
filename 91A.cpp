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
	string s,p;
	cin>>s>>p;
	if(s==p){cout<<1;return 0;}
	int a[26]={0},b[26]={0};
	for (int i = 0; i < s.length(); ++i)
	{
		a[s[i]-'a']++;
	}
	for (int i = 0; i < p.length(); ++i)
	{
		b[p[i]-'a']++;
	}

	for (int i = 0; i < 26; ++i)
	{
		if(a[i]==0 && b[i]>0){cout<<-1;return 0;}
	}
	ll ans=1;
	ll n=s.length();
	ll z=s.length();
	ll k=0,i=0;
	while(k<p.length())
	{
		if(s[i]==p[k])
		{
			k++;
		}
		if(k==p.length()){break;}
		if(i==z-1){i=-1;ans++;}
		i++;
	}	
	cout<<ans;

}



