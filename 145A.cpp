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
	ll c4=0,c7=0;
	for (int i = 0; i <a.length(); ++i)
	{
		if(a[i]!=b[i])
		{
			if(a[i]=='4'){c4++;}
			else c7++;
		}
	}
	ll ans=0;
	ans=min(c4,c7);
	if(c4>=c7){c4=c4-c7;ans+=c4;}
	else{c7=c7-c4;ans+=c7;}
	cout<<ans;
}

