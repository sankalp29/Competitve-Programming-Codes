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

ll power(ll a,ll b)
{
	ll p=1;
	while(b)
	{
		if(b%2){p=p*a;}
		b>>=1;
		a=a*a;
	}
	return p;
}

ll gcd(ll a,ll b)
{
	if(a==0){return b;}
	return gcd(b%a,a);
}

ll fact(ll i,ll a,ll b,int flag)
{
	for(ll j=a;j<=sqrt(i);++j)
	{
		if(i%j==0)
		{
			if(i/j>=b)
			{
				cout<<i nl;
				if(flag)
				{cout<<i/j<<" "<<j;return 1;}
				else
				{cout<<j<<" "<<i/j;return 1;}
			}
		}
	}
	return 0;
}

int main()
{
	#ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll n,a,b;
	cin>>n>>a>>b;
	ll x1=a,y1=b;
	int flag=0;
	if(a>b){swap(a,b);flag=1;}
	if(a*b>=n*6){cout<<a*b nl;cout<<a<<" "<<b;return 0;}
	
	ll req=n*6;
	for(ll i=req;;++i)
	{
		if(fact(i,a,b,flag))
		{
			break;
		}
	}
}



