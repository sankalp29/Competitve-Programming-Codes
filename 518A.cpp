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
	string p="";
	int flag=0,x=0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(t[i]-s[i]==1)
		{
			string z=p;
			p=p+s[i];
			for (int j = 0; j < s.length()-i-1; ++j)
			{
				p=p+'z';
			}
			if(p>s && p<t){cout<<p nl;return 0;}
			if(s[i]=='z'){cout<<"No such string";return 0;}
			z=z+char(s[i]+1);
			for (int j = 0; j < s.length()-i-1; ++j)
			{
				z=z+'a';
			}
			if(z<t && z>s){cout<<z nl;return 0;}
			cout<<"No such string";return 0;
		}

		if(t[i]-s[i]>1)
		{
			p=p+char(s[i]+1);
			p=p+s.substr(i+1);
			flag=1;
			break;
		}
		else p=p+s[i];
	}
	if(flag){cout<<p nl;return 0;}
	cout<<"No such string\n";
	return 0;
}