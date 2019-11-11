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
	string s1;
	cin>>s;
	int ind=-1;
	string a="",b="";
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='|'){ind=i;continue;}
		if(ind>=0){b=b+s[i];}
		else a+=s[i];
	}
	for (int i = 0; i < s1.length(); ++i)
	{
		if(a.length()<b.length()){a=a+s1[i];}
		else b+=s1[i]; 
	}
	if(a.length()!=b.length()){cout<<"Impossible";return 0;}
	cout<<a<<"|"<<b;

}



