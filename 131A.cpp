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
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string s;
	cin>>s;
	int f1=0;
	if(s[0]>='a' && s[0]<='z')
	{f1=1;}
	int c=0;
	for (int i = 1; i < s.length(); ++i)
	{
		if(s[i]>='A' && s[i]<='Z'){c++;}
		else break;
	}
	if(c!=s.length()-1){cout<<s;return 0;}
	if(c==s.length()-1)
	{
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]>='A' && s[i]<='Z')
			{
				s[i]=char(s[i]+32);
			}
			else
			{
				s[i]=char(s[i]-32);
			}
		}
		cout<<s;return 0;
	}
	cout<<s;return 0;

}