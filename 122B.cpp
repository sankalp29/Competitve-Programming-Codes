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
	int n=s.length();
	int x=0,y=0;
	for (int i = 0; i<n; ++i)	
	{
		if(s[i]=='4'){x++;}
		if(s[i]=='7'){y++;}
	}
	if(y>x){cout<<7;return 0;}
	else if(x+y!=0)cout<<4;
	else cout<<-1;
}

