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
	string s;
	cin>>s;
	if(s.length()==1 || s.length()==2){cout<<s;return 0;}
	if(s.length()==3)
	{
		if(s=="WUB"){cout<<"";return 0;}
		cout<<s;return 0;
	}
	s=s+"WUB";
	vector<string>v;
	int c=0;
	string p="";
	for (int i = 0; i < s.length()-2; ++i)
	{
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{
			i=i+2;
			if(p.length()!=0){v.pb(p);}
			p="";
		}
		else
		{
			p=p+s[i];
		}
	}
	
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
}