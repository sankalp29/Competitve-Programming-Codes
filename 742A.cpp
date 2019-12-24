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
	ll n;
	cin>>n;
	if(n==0){cout<<1;return 0;}
	if(n==1){cout<<8;return 0;}
	if(n%4==1){cout<<8;return 0;}
	if(n%4==2){cout<<4;return 0;}
	if(n%4==3){cout<<2;return 0;}
	cout<<6;
}