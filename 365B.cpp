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
	ll n;
	cin>>n;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	if(n==1){cout<<"1";return 0;}
	ll c=2,ans=2;
	for (int i = 2; i < n; ++i)
	{
		if(a[i]==a[i-1]+a[i-2]){c++;}
		else{c=2;}
		ans=max(ans,c);
	}
	cout<<ans;

}