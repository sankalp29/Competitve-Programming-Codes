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
	map<string,ll>m;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		if(m.find(s)==m.end()){m[s]=1;}
		else m[s]++;
	}
	map<string,ll>::iterator itr;
	string ans="";ll maxi=0;;
	for (itr=m.begin(); itr!=m.end(); ++itr)
	{
		if(itr->second>maxi){maxi=itr->second;ans=itr->first;}
	}
	cout<<ans;
}