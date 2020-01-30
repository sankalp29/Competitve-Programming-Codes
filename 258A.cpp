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
	#ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string s;
	cin>>s;
	ll ind=-1;
	for(ll i = 0; i < s.length(); ++i)
	{
		if(s[i]=='0'){ind=i;break;}
	}
	if(ind==-1){cout<<s.substr(0,s.length()-1);return 0;}
	for(int i = 0; i < s.length(); ++i)
	{
		if(i!=ind){cout<<s[i];}
	}
}



