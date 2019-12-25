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
	int c=0;
	int a[s.length()+1]={0};
	int q[s.length()+1]={0};
	for(int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='Q')
		{
			q[i+1]=1;
		}
		else if(s[i]=='A')
		{
			a[i+1]=1;
		}
	}
	for (int i = 0; i < s.length(); ++i)
	{
		q[i+1]+=q[i];
		a[i+1]+=a[i];
	}
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='A')
		{
			c+=q[i+1]*(q[s.length()]-q[i+1]);
		}
	}
	cout<<c;
}