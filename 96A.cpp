#include<bits/stdc++.h>
typedef long long ll;
typedef double ld;
#define vll vector<ll>
#define vvll vector< vll >
#define vld vector< ld >
#define vvld vector< vld >
#define pll pair<ll ,ll >
#define vllp vector< pll >
#define MOD 1000000007
#define endl "\n"
#define MAX 1000000007
#define nl <<endl
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
	int c0=0,c1=0,f=0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='0'){c0++;c1=0;}
		if(c0==7){f=1;break;}
		if(s[i]=='1'){c1++;c0=0;}
		if(c1==7){f=1;break;}
	}
	if(f){cout<<"YES\n";return 0;}
	cout<<"NO";
}