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
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='.'){ind=i;}
	}
	if(s[ind-1]=='9')
	{
		cout<<"GOTO Vasilisa.";return 0;
	}

	if(s[ind+1]>='5' && s[ind+1]<='9')
	{
		int i=ind-1;
		while(s[i]=='9' && i>=0)
		{
			s[i]='0';
			i--;
		}
		if(i==-1){s="1"+s;}
		else
		{
			int x=s[i]-'0';
			x++;
			s[i]=char(x+'0');
		}
	}

	for (int i = 0; i <ind ; ++i)
	{
		cout<<s[i];
	}
}



