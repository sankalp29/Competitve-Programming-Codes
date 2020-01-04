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

ll gcd(ll a,ll b)
{
	if(a==0){return b;}
	return gcd(b%a,a);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll n,m;
	cin>>n>>m;
	ll a[n+1],b[m+1]={0};
	for(int i = 0; i < n+1; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < m+1; ++i)
	{
		cin>>b[i];
	}

	int f=0,g=0;
	if(a[0]<0){f=1;}
	if(b[0]<0){g=1;}
	if(n>m)
	{
		if((f+g)%2==0){cout<<"Infinity";return 0;}
		cout<<"-Infinity";return 0;
	}
	if(m>n)
	{cout<<"0/1";return 0;}
	

	ll gc=gcd(a[0],b[0]);
	if((f+g)%2)
	{
		cout<<-abs(a[0]/gc)<<"/"<<abs(b[0]/gc);
		return 0;
	}
	cout<<abs(a[0]/gc)<<"/"<<abs(b[0]/gc);
}