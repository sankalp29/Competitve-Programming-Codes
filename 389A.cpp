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
	int n;
	cin>>n;
	ll a[n];
	int sum=0,prev=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		sum+=a[i];
	}
	prev=sum;
	while(1)
	{
		for(int i = 0; i < n-1; ++i)
		{
			if(a[i+1]>a[i])
			{
				a[i+1]-=a[i];
			}
		}
		for (int i = 1; i < n; ++i)
		{
			if(a[i-1]>a[i])
			{
				a[i-1]-=a[i];
			}
		}
		int s=0;
		for (int i = 0; i < n; ++i)
		{
			s+=a[i];
		}
		if(s==prev){break;}
		prev=s;
	}
	cout<<prev;

}