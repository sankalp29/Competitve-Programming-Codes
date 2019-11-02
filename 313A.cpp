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
	if(n>=0){cout<<n;return 0;}
	ostringstream str1; 
    str1 << n; 
    string s = str1.str(); 
    ll l=s.length();
    if(s[l-1]>s[l-2])
    {
    	s=s.substr(0,l-1);
    	if(s=="-0"){cout<<"0";}
    	cout<<s;return 0;
    }
    else
    {
    	char x=s[l-1];
    	s=s.substr(0,l-2);
    	s+=s[l-1];
    	if(s=="-0"){cout<<"0";}
    	else cout<<s;
    }
}