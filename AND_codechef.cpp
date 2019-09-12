#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000007
     
using namespace std;
  
int maxi(ll a,ll b) 
{
    return (a>b)?a:b;
}  

int mini(ll a,ll b)
{
    return (a>b)?b:a;
}  


ll func(ll a[],ll n,ll ans)
{
	ll c=0;
	for (int i = 0; i < n; ++i)
	{
		if((ans & a[i])==ans){c++;}
	}
	return c;
}


int main()
{
	ll i,j,c;
	ll n;
	cin>>n;
	ll a[n]={0};
	for (i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	ll ans=0;
	for (int i = 31; i>=0; --i)
	{
		if(func(a,n,ans|(1<<i))>=2)
		{
			ans=ans|(1<<i);
		}
	}
	cout<<ans<<endl;
}