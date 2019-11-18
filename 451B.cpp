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

int sorted(ll a[],ll n)
{
	for (int i = 2; i <=n; ++i)
	{
		if(a[i]<a[i-1]){return 0;}
	}
	return 1;
}

int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for (int i = 1; i <=n; ++i)
	{
		cin>>a[i];
	}

	if(sorted(a,n)){cout<<"yes\n1 1";return 0;}
	ll p=0,c=0,ind=-1,st=-1;
	ll i;	
	for(i = 2; i <=n; ++i)
	{
		if(a[i-1]>=a[i]){if(c==0){st=i-1;c=1;p++;}}
		else{if(c==1){ind=i-1;c=0;} }
		//cout<<"At i="<<i<<" st="<<st<<" and ind="<<ind nl;
	}
	if(p>1){cout<<"no\n";return 0;}
	if(ind==-1){ind=n;}
	if(ind!=n)
	{
		if(a[st]<=a[ind+1])
		{
			if(st!=1)
			{
				if(a[ind]>=a[st-1])
				{
					cout<<"yes\n"<<st<<" "<<ind;return 0;
				}
				else cout<<"no";return 0;
			}
			else cout<<"yes\n"<<st<<" "<<ind;return 0;
		}
		else cout<<"no";return 0;
	}
	else if(st!=1)
	{
		if(a[ind]>=a[st-1])
		{
			cout<<"yes\n"<<st<<" "<<ind;return 0;
		}
		else cout<<"no";return 0;
	}
	cout<<"yes\n"<<st<<" "<<ind;
}