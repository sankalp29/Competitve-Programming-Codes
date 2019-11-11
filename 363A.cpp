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
	for(int i=s.length()-1; i>=0 ; --i)
	{
		int x=s[i]-'0';
		string s1="";
		if(x>=5)
		{
			s1="-O|";
			x-=5;
		}
		else
		{
			s1="O-|";
		}
		int c=0;
		while(x>0)
		{
			s1+='O';
			c++;
			x--;
		}
		s1+='-';
		while(c<4){s1+='O';c++;}
		cout<<s1 nl;
	}
}