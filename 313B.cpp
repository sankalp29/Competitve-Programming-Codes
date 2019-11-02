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
	ll a[s.length()]={0};
	ll b[s.length()+1]={0};
	for (int i = 0; i < s.length()-1; ++i)
	{
		if(s[i]==s[i+1]){a[i]=1;}
	}
	for(int i = 0; i<s.length(); ++i)
	{
		b[i+1]=b[i]+a[i];
	}
	cout nl;
	ll m;
	cin>>m;
	ll v1,v2;
	for (int i = 0; i < m; ++i)
	{
		cin>>v1>>v2;
		cout<<b[v2-1]-b[v1-1] nl;
	}

}