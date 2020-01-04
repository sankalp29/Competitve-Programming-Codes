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
	ll n,p;
	cin>>n>>p;
	string s;
	cin>>s;
	ll mid=(n+1)/2;
	mid=mid-(n%2);
	ll c=0;ll indl=-1,indr=-1;
	ll f=0;
	/*p--;
	if(p>mid){p=mid-(p-mid);}
	cout<<"p= "<<p nl;*/
	for(ll i = 0; i < n; ++i)
	{
		if(p-1==i){p=min(i,n-i-1);break;}
	}
	for(int i=0;i<mid;++i)
	{	
		if(s[i]!=s[n-i-1])
		{
			if(indl==-1)
			{
				indl=i;
			}
			indr=i;
		}
		if(s[i]>s[n-i-1])
		{
			ll x=int(s[i]-s[n-i-1]);
			ll y=int('z'-s[i])+1+int(s[n-i-1]-'a');
			c+=min(x,y);
		}
		if(s[n-i-1]>s[i])
		{
			ll x=int(s[n-i-1]-s[i]);
			ll y=int(s[i]-'a')+1+int('z'-s[n-i-1]);
			c+=min(x,y);
		}
	}
	if(indr!=-1 && indl!=-1)
	{
		if(indr>=p && indl<=p){c+=min(2*(indr-p)+(p-indl),2*(p-indl)+(indr-p));}
		else if(indr<=p){c+=p-indl;}
		else if(indl>=p){c+=indr-p;}
	}
	cout<<c;
}








