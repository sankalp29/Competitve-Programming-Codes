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

bool arr[2301]={false};
vector<ll>v;
void sieve()
{
	for(ll i = 2; i<=2300;++i)
	{
		if(arr[i]==false)
		{
			v.pb(i);
			for(ll j =i*i; j<=2300; j+=i)
			{
				arr[j]=true;
			}	
		}
	}
}

int facts[5000001];

int main()
{
	sieve();
	for(ll i=2;i<5000001; ++i)
	{
		int c=0,m=i;
		for (ll j=0; j<v.size() && m!=1; ++j)
		{
			while(m%v[j]==0){m=m/v[j];c++;}
		}
		if(m>1){c++;}
		facts[i]=facts[i-1]+c;
	}

	ll t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<facts[a]-facts[b] nl;
	}
}