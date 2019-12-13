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
	ll val;
	ll sum[3]={0};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < n-i; ++j)
		{
			cin>>val;
			sum[i]+=val;
		}
	}
	cout<<sum[0]-sum[1] nl<<sum[1]-sum[2];
}