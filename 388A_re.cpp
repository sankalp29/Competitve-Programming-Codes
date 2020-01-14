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

ll power(ll a,ll b)
{
	ll p=1;
	while(b)
	{
		if(b%2){p=p*a;}
		b>>=1;
		a=a*a;
	}
	return p;
}

ll gcd(ll a,ll b)
{
	if(a==0){return b;}
	return gcd(b%a,a);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int b[n]={0};
	int ans=0;
	int load[n]={0};
	for (int i = 0; i < n; ++i)
	{load[i]=1;
	}
	for(int i=0;i<n;++i)
	{	
		int index=-1;
		for(int j=0;j<n;++j)
		{
			if(b[j]==0){index=j;break;}	
		}
		if(index==-1){continue;}
		b[index]=1;
		for(int j=index+1;j<n;++j)
		{
			if(a[j]>=load[index])
			{

				b[j]=1;
				a[j]=min(a[j]-load[index],a[index]);
				load[j]+=load[index];
				a[index]=a[j];
				index=j;
			}
		}
		ans++;
	}
	cout<<ans;
}