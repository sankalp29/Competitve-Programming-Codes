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
	ll n;
	cin>>n;
	
	string ans="";
	while(n%7!=0 && n>0)
	{
		ans=ans+'4';
		n-=4;
	}
	if(n%7==0)
	{
		for(int i = 0; i < n/7; ++i)
		{
			ans+='7';
		}
		cout<<ans;return 0;
	}
	cout<<-1;
}	