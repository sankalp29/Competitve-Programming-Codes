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
	ll k;
	cin>>k;
	int f=0;
	map<ll,pair<ll,ll> >m;
	for (int j = 0; j<k; ++j)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll s=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			s+=a[i];
		}

		for (int i = 0; i < n; ++i)
		{
			if(m.find(s-a[i])==m.end())
			{
				m[s-a[i]].F=j;
				m[s-a[i]].S=i;
			}
			else if(!f && m[s-a[i]].F!=j)
			{
				cout<<"YES\n";
				//cout<<"Sum="<<s-a[i] nl;
				cout<<m[s-a[i]].F+1<<" "<<m[s-a[i]].S+1 nl;
				cout<<j+1<<" "<<i+1;f=1;
				break;
			}
		}
	}
	if(!f)
	cout<<"NO\n";
	return 0;
}
