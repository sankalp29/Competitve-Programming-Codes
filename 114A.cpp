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
	ll k,l;
	cin>>k>>l;
	ll c=0;
	if(l<k){cout<<"NO";return 0;}
	while(l%k==0){l=l/k;c++;}
	if(l==1){cout<<"YES\n"<<c-1;return 0;}
	cout<<"NO";
}