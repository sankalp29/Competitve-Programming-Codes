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
	string a,b;
	cin>>a>>b;
	if(b.length()>a.length()){cout<<0;return 0;}
	if(b.length()==a.length())
	{
		if(a==b){cout<<1;}
		else cout<<0;
		return 0;
	}	
	ll j=0,l=b.length(),c=0;
	for(int i = 0; i < a.length(); ++i)
	{
		if(a[i]==b[j]){j++;}
		else{j=0;}	
		if(j==l){c++;j=0;}
	}
	if(j==l){c++;}
	cout<<c;
}