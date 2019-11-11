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
	int n;
	cin>>n;
	string s;
	cin>>s;

	int curr=-1,curl=-1;
	int ans=n,from=0;
	for(int i=0;i<n;++i)
	{
		if(s[i]=='L')
		{
			curl=i;
			if(curr==-1)
			{
				ans-=(i+1);
			}
			else
			{
				if((curl-curr)%2==0)
				{
					ans-=(curl-curr);
					curr=i-(curl-curr)/2;
				}
				else
				{
					ans-=(curl-curr+1);
					curr=i;
				}
			}
		}
		if(s[i]=='R')
		{
			curr=i;
		}
	}	
	if(curr>curl)
	ans-=(n-curr);
	cout<<ans;
} 

