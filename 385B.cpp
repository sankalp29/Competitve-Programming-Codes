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

int main()
{
	string s;
	cin>>s;
	ll i=0,j=0,ans=0,l=s.length();
	for(ll i = 0; i<l; ++i)
	{
		string s1;
		if(i+3<l)
		{
			s1=s[i];
			s1+=s[i+1];s1+=s[i+2];s1+=s[i+3];
		}
		if(s1=="bear")
		{
			ans=ans+(i-j+1)*(l-i-3);
			j=i+1;
			i+=3;
		}
	}
	cout<<ans;
}