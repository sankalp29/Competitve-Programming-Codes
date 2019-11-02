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
	map<string,int>m;
	string p="";
	vector<string>v;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]!=','){p=p+s[i];}
		else
		{
			if(m.find(p)==m.end())
			{
				m[p]=1;
				v.pb(p);
			}
			p="";
		}
	}
	


}



