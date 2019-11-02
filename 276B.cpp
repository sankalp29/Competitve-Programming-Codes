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
int a[26]={0};

int check()
{
	int l=0;
	for (int i = 0; i < 26; ++i)
	{
		l+=a[i];		
	}
	if(l==0){return 0;}
	if(l%2)
	{
		int c=0;
		for (int i = 0; i < 26; ++i)
		{
			if(a[i]==1){c++;}
			else if(a[i]%2){return 0;}
			if(c==2){return 0;}
		}
		/*
		for (int i = 0; i < 26; ++i)
		{
			if(a[i]!=0 && a[i]%2){a[i]--;}
		}
		*/
		return 1;
	}	
	else
	{
		for (int i = 0; i < 26; ++i)
		{
			if(a[i]%2){return 0;}
		}
		return 1;
		/*
		for (int i = 0; i < 26; ++i)
		{
			if(a[i]%2==0 && a[i]!=0){a[i]--;return 1;}
		}
		*/
	}
}

int main()
{
	string s;
	cin>>s;
	int f=0;
	for (int i = 0; i < s.length(); ++i)
	{
		a[s[i]-'a']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if(a[i]%2){f++;}
	}
	if(f<2 || f%2==1){cout<<"First";return 0;}
	else cout<<"Second";
}