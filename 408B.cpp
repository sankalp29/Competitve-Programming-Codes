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
	string s1,s2;
	cin>>s1>>s2;
	int a[27]={0},b[27]={0};
	for (int i = 0; i < s1.length(); ++i)
	{
		a[s1[i]-'a']++;
	}
	for (int i = 0; i < s2.length(); ++i)
	{
		b[s2[i]-'a']++;
	}
	ll s=0,f=0;
	for (int i=0; i<27; ++i)
	{
		if(b[i]>0 && a[i]==0){f=1;break;}
		s=s+min(a[i],b[i]);
	}
	if(f){cout<<"-1";return 0;}
	cout<<s;
}