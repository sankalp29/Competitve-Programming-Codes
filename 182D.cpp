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
	int n;
	cin>>n;
	string s1,s2;
	vector<pair<int,int> >v;
	map<int,string>m;
	for (int i = 0; i<n; ++i)
	{
		cin>>s1>>s2;
		if(s2=="rat")
		{
			v.pb(mp(0,i));
			m[i]=s1;
			continue;
		}
		if(s2=="man")
		{
			v.pb(mp(2,i));
			m[i]=s1;
			continue;
		}
		if(s2=="woman" || s2=="child")
		{
			v.pb(mp(1,i));
			m[i]=s1;
			continue;
		}
		if(s2=="captain")
		{
			v.pb(mp(3,i));
			m[i]=s1;
		}
	}
	sort(v.begin(),v.end());
	for (int i = 0; i <n; ++i)
	{
		cout<<m[v[i].S] nl;
	}
}



