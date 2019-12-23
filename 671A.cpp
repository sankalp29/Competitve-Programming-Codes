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
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll ax,ay,bx,by,tx,ty;
	cin>>ax>>ay>>bx>>by>>tx>>ty;
	ll n;
	cin>>n;
	vllp v;
	ll x,y;
	double aid[n],ard[n],bid[n],brd[n];
	for(ll i = 0; i < n; ++i)
	{
		cin>>x>>y;
		v.pb(mp(x,y));
		aid[i]=1.0*sqrt((x-ax)*(x-ax)+(y-ay)*(y-ay));
		ard[i]=1.0*sqrt((x-tx)*(x-tx)+(y-ty)*(y-ty));
		bid[i]=1.0*sqrt((x-bx)*(x-bx)+(y-by)*(y-by));
		brd[i]=1.0*sqrt((x-tx)*(x-tx)+(y-ty)*(y-ty));
	}
	
	
	
}


