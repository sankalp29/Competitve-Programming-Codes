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
	int n,x,y;
	cin>>n>>x>>y;
	vector<pair<int,int> >v;
	int v1,v2;
	for (int i = 0; i < n; ++i)
	{
		cin>>v1>>v2;
		v.pb(mp(v1,v2));
	}
	map<double,ll>m;
	int c=0;
	for(int i = 0; i < n; ++i)
	{
		if(v[i].F-x==0){if(m.find(MAX)==m.end()){c++;m[MAX]=1;}}
		else{if(m.find(1.0*(v[i].S-y)/(v[i].F-x))==m.end()){c++;m[1.0*(v[i].S-y)/(v[i].F-x)]=1;}} 
	}
	cout<<c;
}