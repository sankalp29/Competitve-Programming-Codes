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

int gcd(int a,int b)
{
	if(a==0){return b;}
	return gcd(b%a,a);

}

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;

	if(b*c==a*d)
	{
		cout<<"0/1";return 0;
	}
	a=a*d;
	b=b*c;
	int nu,de;
	if(a<b)
	{
		nu=b-a;
		de=b;
	}
	else
	{
		nu=a-b;
		de=a;
	}

	int r=gcd(nu,de);
	nu/=r;
	de/=r;
	cout<<nu<<"/"<<de;
}

