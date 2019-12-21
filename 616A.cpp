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
	string a,b;
	cin>>a>>b;
	string p="",s="";
	ll i=0,j=0;
	for (i=0; i < a.length(); ++i)
	{
		if(a[i]!='0'){break;}
	}
	a=a.substr(i);
	for (j=0; j<b.length(); ++j)
	{
		if(b[j]!='0'){break;}
	}
	b=b.substr(j);
	if(a.length()>b.length()){cout<<">";return 0;}
	if(b.length()>a.length()){cout<<"<";return 0;}

	if(a>b){cout<<">";return 0;}
	if(b>a){cout<<"<";return 0;}
	cout<<"=";
}




