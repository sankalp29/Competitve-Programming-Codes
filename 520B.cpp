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
	ll n,m;
	cin>>n>>m;
	if(m<=n){cout<<n-m;return 0;}
	ll c=0;
	while(m>n)
	{
		if(m%2!=0)
		{
			c++;
			m++;
		}
		else {
			m=m/2;
			c++;
		} 
		if(n>=m){c+=(n-m);break;}
	}
	cout<<c;
}