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
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int maxi=0;
	for (int i = 0; i < n; ++i)
	{
		int j=i-1,c=0,cur=a[i];
		while(j>=0)
		{
			if(a[j]>cur){break;}
			cur=a[j];
			c++;
			j--;
		}
		j=i+1;cur=a[i];
		while(j<n)
		{
			if(a[j]>cur){break;}
			c++;
			cur=a[j];
			j++;
		}
		c++;
		maxi=max(c,maxi);
	}
	cout<<maxi nl;

}





