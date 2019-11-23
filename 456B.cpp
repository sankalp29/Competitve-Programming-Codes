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

bool a[1002];
vector<ll>v;
void sieve()
{
	for(int i = 2; i<=1000; ++i)
	{
		if(a[i]==false)
		{
			v.pb(i);
			for(int j =i*i; j <=1000; j+=i)
			{
				a[j]=true;
			}	
		}
	}
}

int main()
{
	string s;
	cin>>s;
	ll l=s.length();
	int x=s[l-1]-'0';
	if(l>1){x+=s[l-2]*10;}
	
	if(x%4==0){cout<<4;return 0;}
	cout<<0;
}