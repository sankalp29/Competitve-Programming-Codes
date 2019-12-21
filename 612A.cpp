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
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

int main()
{
	int n,p,q;
	cin>>n>>p>>q;
	string s;
	cin>>s;
	int l=s.length(),f=0;
	int x1=-1,x2=-1;
	for(int i=0;i<101;++i)
	{
		for(int j = 0; j < 101; ++j)
		{
			if(i*p+j*q==l)
			{
				x1=i;
				x2=j;
				f=1;
				break;
			}	
		}
		if(f){break;}
	}

	if(x1==-1 && x2==-1){cout<<-1;return 0;}
	cout<<x1+x2 nl;
	int j=0;
	for(int i=0;i<x1;++i)
	{
		int c=0;
		for(;j<l,c<p;++j,c++)
		{
			cout<<s[j];
		}
		cout nl;
	}

	for (int i = 0; i < x2; ++i)
	{
		int c=0;
		for(;j<l,c<q;++j,c++)
		{
			cout<<s[j];
		}
		cout nl;		
	}
}


