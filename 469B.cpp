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
	int p,q,l,r;
	cin>>p>>q>>l>>r;
	vector<pair<int,int> >z;
	int v1,v2;
	for (int i = 0; i < p; ++i)
	{
		cin>>v1>>v2;
		z.pb(mp(v1,v2));	
	}	
	vector<pair<int,int> >x;
	for (int i = 0; i < q; ++i)
	{
		cin>>v1>>v2;
		x.pb(mp(v1,v2));
	}
	int ans=0;
	for (int i=l; i<=r; ++i)
	{
		vector<pair<int,int> >p1;
		for (int j = 0; j < q; ++j)
		{
			p1.pb(mp(i+x[j].F,i+x[j].S));
		}
		int c=0,f=0;
		for (int j = 0; j < q; ++j)
		{
			for (int k = 0; k < p; ++k)
			{
				if(!(z[k].F>p1[j].S) && !(z[k].S<p1[j].F)){c++;f=1;break;}
			}
			if(f){break;}
		}
		ans+=c;
	}
	cout<<ans;
}


