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

ll stoint(string ans)
{
	stringstream geek(ans); 
	ll x=0;
    geek >> x; 
    return x;
}

ll next(ll i)
{
	int flag=0,f=0,g=0,extraall4=0;
	ll n=i;
	string ans="";
	
	stringstream ss;
	ss << i;
	string s = ss.str();
	
	for(int j = 0; j<s.length(); ++j)
	{
		if(s[j]=='4' || s[j]=='7'){continue;}
		else {flag=1;break;}
	} 

    if(!flag){return i;}
	
	for(int j = 0;j < s.length(); ++j) 
	{
		if(s[j]=='7')
		{
			f=1;ans+='7';continue;
		}
		if(s[j]>'7')
		{

			if(!f && !g)
			{
				for(int k = 0; k < s.length()+1; ++k)
				{
					ans+='4';
				}
    			return stoint(ans); 					
			}
			for(int k = ans.length()-1; k>=0;--k)
			{
				if(ans[k]=='4')
				{
					ans[k]='7';g=1;
					for(int m = k+1; m < ans.length();++m)
					{
						ans[m]='4';
					}
					break;
				}
			}
			if(!g)
			{
				ans="";
				for(int k = 0; k < s.length()+1; ++k)
				{
					ans+='4';
				}
    			return stoint(ans); 	
			}
			for(int k = ans.length(); k<s.length(); ++k)
			{
				ans+='4';
			}
			return stoint(ans);
		}
		if(s[j]=='4'){f=1;ans+='4';continue;}
		if(s[j]<'4')
		{
			for(;j<s.length();++j)
			{
				ans+='4';
			}
    		return stoint(ans); 					
		}
		if(s[j]>'4' && s[j]<'7')
		{
			ans+='7';
			for(int k=ans.length();k<s.length();++k)
			{
				ans+='4';
			}
			return stoint(ans);
		}
	}
	//return stoint(i);
}

int main()
{
	#ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll l,r;
	cin>>l>>r;
	ll ans=0;
	while(l<=r)
	{
		ll z=next(l);
		//cout<<z<<"*"<<min(z-l+1,r-l+1) nl;
		ans+=z*min(z-l+1,r-l+1);
		l=z+1;
	}
	cout<<ans;
}