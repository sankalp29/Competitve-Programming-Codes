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
	int q;
	cin>>q;
	map<string,ll>m;
	vector<pair<string,string> >v;
	string s1,s2;
	for (ll i = 0; i < q; ++i)
	{
		cin>>s1>>s2;
		if(m.find(s1)==m.end())
		{
			v.pb(mp(s1,s2));
			m[s2]=v.size()-1;
		}
		else
		{
			int x=m[s1];
			v[m[s1]].S=s2;
			m[s2]=x;
		}
	}
	cout<<v.size() nl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i].F<<" "<<v[i].S nl;
	}
}
