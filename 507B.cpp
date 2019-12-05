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
	double r,x1,y1,x2,y2;
	cin>>r>>x1>>y1>>x2>>y2;

	double dist=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

	ll c=ceil(dist/(2*r));
	
	cout<<c;	

}