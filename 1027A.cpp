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
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		int a[n]={0};

		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='a'){s[i]='b';a[i]=-1;}
			if(s[i]=='z'){s[i]='y';a[i]=-1;}
		}
		int f=0;
		for (int i = 0; i < n/2; ++i)
		{
			if(a[i]+a[n-i-1]==0)
			{
				int x=s[i]-'a';
				int y=s[n-i-1]-'a';
				if(abs(x-y)==2 || x==y){continue;}
				else {f=1;break;}
			}
			if(a[i]+a[n-i-1]==-1)
			{
				int x=s[i]-'a';
				int y=s[n-i-1]-'a';
				if(abs(x-y)==1){continue;}
				else {f=1;break;}	
			}
			else if(s[i]==s[n-i-1]){continue;}
			else {f=1;break;}
		}
		if(f)
		{
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
}

