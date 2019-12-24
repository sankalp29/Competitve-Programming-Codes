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
map<ll,ll>m;
int main()
{
	ll n,x;
	cin>>n>>x;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	ll s=0;
	for (int i = 0; i < n; ++i)
	{
		if(m.find(a[i]^x)!=m.end())
		{
			s+=m[a[i]^x];
			if(a[i]==(a[i]^x)){s--;}
		}
	}
	cout<<s/2; 
}