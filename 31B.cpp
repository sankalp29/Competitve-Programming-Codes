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
	vector<string>v;
	int f=0;
	string p="";

	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='@')
		{
			if(p.length()==0 || i==s.length()-1){cout<<"No solution";return 0;}
			if(s[i+1]=='@'){cout<<"No solution";return 0;}
			p=p+s[i]+s[i+1];
			i++;
			v.pb(p);
			p="";
		}
		else
		{
			p=p+s[i];
		}
	}
	if(v.size()!=0)
	{
		for (int i = 0; i < v.size(); ++i)
		{
			if(i==v.size()-1){cout<<v[i]+p;}
			else cout<<v[i];
			if(i!=v.size()-1){cout<<",";}
		}
		return 0;
	}
	cout<<"No solution";
}

