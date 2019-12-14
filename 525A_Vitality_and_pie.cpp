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
using namespace std;

int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	int a[26]={0};
	ll c=0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			if(a[(s[i]+32)-'a']==0){c++;}
			else a[(s[i]+32)-'a']--;
		}
		else
		{
			a[s[i]-'a']++;
		}
	}
	cout<<c nl;
}