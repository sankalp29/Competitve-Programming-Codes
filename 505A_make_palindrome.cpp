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

bool palindrome(string s)
{
	int m=s.length();
	for (int i = 0; i < m/2; ++i)
	{
		if(s[i]!=s[m-i-1]){return false;}
	}
	return true;
}


int check(string s,int n)
{
	int c=0;
	int v=s.length();
	for (int i = 0; i < n; ++i)
	{
		if(s[i]!=s[n-i-1])
		{
			c++;
			if(c==2){break;}
			char x=s[i];
			string p=s.substr(0,n-i);
			string z=s.substr(n-i);
			s=p;
			s=s+x;
			s=s+z;
			//cout<<s nl;
			i=-1;
			n=s.length();
		}
	}
	if(s.length()-v==1 && palindrome(s)){cout<<s;return 1;}
	return 0;
}

int main()
{
	string s;	
	cin>>s;
	int n=s.length();
	int v=s.length();
	
	if(n==1){cout<<s[0];cout<<s[0];return 0;}
	if(n==2)
	{
		cout<<s;
		cout<<s[0];return 0;
	}

	if(palindrome(s))
	{	
		cout<<s.substr(0,v/2);
		cout<<s[v/2];
		cout<<s.substr(v/2);
		return 0;
	}
	
	int x=check(s,n);
	if(x==1){return 0;}
	reverse(s.begin(),s.end());
	int y=check(s,n);
	if(y==1){return 0;}
	cout<<"NA";
}

