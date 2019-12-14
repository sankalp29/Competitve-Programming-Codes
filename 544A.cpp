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
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

int main()
{
	int k;
	cin>>k;
	string s;
	cin>>s;
	if(k>s.length()){cout<<"NO";return 0;}

	vector<string>ans1;
	vector<string>ans;
	map<char,int>m;
	string p="";
	p=p+s[0];
	m[s[0]]=1;
	for(ll i = 1; i < s.length(); ++i)
	{
		if(m.find(s[i])==m.end())
		{
			ans1.pb(p);
			p="";
			p=p+s[i];
			m[s[i]]=1;
		}
		else p=p+s[i];
	}
	ans1.pb(p);

	int ind=-1,c=0;
	p="";
	for(ll i=0; i<ans1.size(); ++i)
	{
		c++;
		if(c==k){p=p+ans1[i];ind=i+1;break;}
		ans.pb(ans1[i]);
	}
	for(int i = ind; i<ans1.size(); ++i)
	{
		p+=ans1[i];
	}
	ans.pb(p);

}




