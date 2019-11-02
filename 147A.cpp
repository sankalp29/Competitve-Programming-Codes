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
	char s[10000];
	//cin>>s;
	gets(s);
	string ans="";
	vector<string>v;
	string p="";
	for (int i = 0; i < strlen(s); ++i)
	{
		if(s[i]=='.'){p=".";v.pb(p);p="";continue;}
		if(s[i]==','){p=",";v.pb(p);p="";continue;}
		if(s[i]!=' ')
		{
			p=p+s[i];
			continue;
		}
		else
		{
			v.pb(p);
			p="";
			continue;
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	for (int i = 0; i < v.size(); ++i)
	{
		if(i==v.size()-1)
		{
			if(ans[ans.length()-1]==' '){ans=ans+v[i];break;}

		}
		if(v[i]=="," || v[i]=="."){cout<<v[i]<<" ";ans=ans+v[i];ans=ans+" ";continue;}
		if(i!=0)
		{
			if(ans[ans.length()-1]==' '){ans=ans+v[i];}
			else {ans=ans+" ";ans=ans+v[i];}
		}
		else
		{
			ans=ans+v[i];
		}

	}
}


