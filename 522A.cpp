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
	ll n;
	cin>>n;
	string s1,s2,s3;
	map<string,ll>m;
	ll c=1,maxi=1;
	while(n--)
	{
		cin>>s1>>s2>>s3;
		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		transform(s3.begin(), s3.end(), s3.begin(), ::tolower);  
		if(m.find(s3)==m.end())
		{
			m[s1]=2;
		}
		else
		{
			m[s1]=m[s3]+1;
		}
		maxi=max(maxi,m[s1]);
	}
	cout<<maxi;
}