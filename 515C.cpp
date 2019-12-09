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
	ll no;
	cin>>no;
	ll fact[10]={1};
	for (int i = 1; i<10; ++i)
	{
		fact[i]=fact[i-1]*i;
	}

	ll powers[10][4]={0};
	ll prim[4]={2,3,5,7};
	
	for (int i = 0; i<10; ++i)
	{
		ll x1=fact[i];
		for (int j = 0; j < 4; ++j)
		{
			while(x1%prim[j]==0)
			{
				powers[i][j]++;
				x1=x1/prim[j];
			}
		}
	}

	ll totpower[4]={0};
	ll c=0;
	while(no)
	{
		ll x1=no%10;
		x1=fact[x1];
		for (int i = 0; i < 4; ++i)
		{
			while(x1%prim[i]==0){totpower[i]++;x1=x1/prim[i];c++;}
		}
		no=no/10;
	}
/*	for (int i = 0; i < 4; ++i)
	{
		cout<<prim[i]<<"->"<<totpower[i] nl;
	}
*/
	for (int i = 3; i>=0; --i)
	{
		while(totpower[i]>0)
		{
			cout<<prim[i];

			for(int j = 3; j>=0; --j)
			{
				totpower[j]=totpower[j]-powers[prim[i]][j];
			}
		}
	}	
}