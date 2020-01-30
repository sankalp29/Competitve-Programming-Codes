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

ll power(ll a,ll b)
{
	ll p=1;
	while(b)
	{
		if(b%2){p=p*a;}
		b>>=1;
		a=a*a;
	}
	return p;
}

ll gcd(ll a,ll b)
{
	if(a==0){return b;}
	return gcd(b%a,a);
}

int main()
{
	#ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	ll n;
	cin>>n;
	ll val,count=0,count50=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>val;
		if(val==25){count++;continue;}
		if(val==50)
		{
			if(count==0){cout<<"NO\n";return 0;}
			count--;
			count50++;
			continue;
		}
		if(count<1){cout<<"NO\n";return 0;}
		if(count50){count50--;count--;continue;}
		if(count>=3){count-=3;continue;}
		cout<<"NO\n";return 0;
	}
	cout<<"YES";
}








