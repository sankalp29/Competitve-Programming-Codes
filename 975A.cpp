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
using namespace std;


int main()
{
	int n;
	cin>>n;
	set<set<char> >root;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin>>s;
		set<char>x;
		for (int j = 0; j < s.length(); ++j)
		{
			x.insert(s[j]);
		}
		root.insert(x);
	}
	cout<<root.size()<<endl;
}