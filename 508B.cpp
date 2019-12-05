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
	int ind=-1;
	int fir=s[0]-'0';
	int last=s[s.length()-1]-'0';
	
	for (int i = 0; i < s.length(); ++i)
	{
		int x=s[i]-'0';
		char e=s[i];
		if(x%2==0 && last>x)
		{
			s[i]=s[s.length()-1];
			s[s.length()-1]=e;
			cout<<s;return 0;
		}
	}

	for (int i =0; i < s.length(); ++i)
	{
		int x=s[i]-'0';
		if(x%2==0)
		{
			ind=i;
		}
	}
	if(ind==-1){cout<<-1;return 0;}
	char y=s[ind];
	s[ind]=s[s.length()-1];
	s[s.length()-1]=y;
	cout<<s;
}

