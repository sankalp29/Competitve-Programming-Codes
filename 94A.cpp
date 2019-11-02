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
	map<string,int>m;
	string s1;
	for (int i = 0; i < 10; ++i)
	{
		cin>>s1;
		m[s1]=i;
	}
	string p="";
	int c=0;
	for (int i = 0; i < s.length(); ++i)
	{
		p=p+s[i];
		c++;
		if(c%10==0){c=0;cout<<m[p];p="";}
	}
}


