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
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		//map<ll,ll>even;
		ll even=0,odd=0;
		ll val;
		for (int i = 0; i < n; ++i)
		{
			cin>>val;
			if(val%2==0)even++;
			else odd++;
		}
		ll m;
		cin>>m;
		ll sum=0;
		for (int i = 0; i<m; ++i)
		{
			cin>>val;
			if(val%2==0)
			{
				sum=sum+even;
			}
			else sum=sum+odd;
		}
		cout<<sum nl;
	}

}


