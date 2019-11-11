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
	string s;
	cin>>s;
	ll ind=-1;
	for(ll i = 0; i < s.length(); ++i)
	{
		if(s[i]=='^'){ind=i;break;}
	}
	ll lsum=0,rsum=0;
	for(ll i = 0; i < ind; ++i)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			int x=s[i]-'0';
			lsum+=x*(ind-i);
		}
	}
	for (int i = ind+1; i<s.length(); ++i)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			int x=s[i]-'0';
			rsum+=x*(i-ind);
		}
	}
	if(lsum==rsum){cout<<"balance";return 0;}
	if(lsum>rsum){cout<<"left";return 0;}
	cout<<"right";
}