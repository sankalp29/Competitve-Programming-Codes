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
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<string>v;
	v.pb("vaporeon");
	v.pb("jolteon");
	v.pb("flareon");
	v.pb("espeon");
	v.pb("umbreon");
	v.pb("leafeon");
	v.pb("glaceon");
	v.pb("sylveon");
	
	for (int i = 0; i < 8; ++i)
	{
		int flag=0;
		if(n!=v[i].length())
		{continue;}
		else
		{
			for (int j = 0; j < v[i].length(); ++j)
			{
				if(s[j]!='.')
				{
					if(s[j]!=v[i][j]){flag=1;break;}
				}
			}
			if(!flag){cout<<v[i];break;}	
		}
	}
}




