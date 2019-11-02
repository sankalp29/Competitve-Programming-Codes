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
	int n;
	cin>>n;
	ll a[n][2];
	vector<pair<int,int> >v1;
	vector<pair<int,int> >v2;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i][0]>>a[i][1];
		v1.pb(mp(a[i][0],a[i][1]));
		v2.pb(mp(a[i][1],a[i][0]));
	}


	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	ll maxi=0,c=1,sum=0;
	for (int i =n-1;c>0 && i>=0; --i)
	{
		sum+=v1[i].F;
		c--;
		c=c+v1[i].S;
	}
	maxi=sum;
	sum=0;c=1;
	for (int i = n-1;c>0 && i>=0; --i)
	{
		sum+=v2[i].S;
		c--;
		c=c+v2[i].F;	
	}
	maxi=max(maxi,sum);
	cout<<maxi;
}

