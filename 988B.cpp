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

int is(string a,string b)
{
	size_t found = b.find(a); 
    if (found != string::npos){return 1;}
    return 0;
}

int main()
{
	int n;
	cin>>n;
	vector<pair<int,string> >v;
	string s;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		v.pb(mp(s.length(),s));
	}
	sort(v.begin(),v.end());

	for (int i = 0; i < n-1; ++i)
	{
		if(!is(v[i].S,v[i+1].S)){cout<<"NO\n";return 0;}
	}
	cout<<"YES\n";
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i].S nl;
	}
}





