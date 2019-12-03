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
//#define mp make_pair
#define F first
#define S second
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	map<string,string>mp;
	string s1,s2;
	for (int i = 0; i < m; ++i)
	{
		cin>>s1>>s2;
		if(s2.length()<s1.length())
		{
			mp[s1]=s2;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>s1;
		if(mp.find(s1)==mp.end())
		{
			cout<<s1<<" ";
		}
		else cout<<mp[s1]<<" ";
	}
}